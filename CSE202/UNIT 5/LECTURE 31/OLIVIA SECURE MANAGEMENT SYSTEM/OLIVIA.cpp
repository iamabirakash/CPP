// You are using GCC
#include<iostream>
#include<string>
using namespace std;
const int MAX_USERS = 10;
struct User{
    string username;
    string encryptPassword;
};
string encryptPassword(const string& password){
    string encrypted = password;
    for(char& c : encrypted){
        c += 3;
    }
    return encrypted;
}

string decryptPassword(const string& encryptPassword){
    string decrypted = encryptPassword;
    for(char& c : decrypted){
        c -= 3;
    }
    return decrypted;
}

bool registerUser(User users[], int& userCount, const string& username, const string& password){
    if(userCount>=MAX_USERS){
        cout<<"Maximum users reached"<<endl;
        return false;
    }
    for(int i=0;i<userCount;i++){
        if(users[i].username == username){
            cout<<"Username already taken"<<endl;
            return false;
        }
    }
    users[userCount].username = username;
    users[userCount].encryptPassword = encryptPassword(password);
    userCount++;
    return true;
}

void retrievePassword(const User users[],int userCount, const string& username){
    for(int i=0;i<userCount;i++){
        if(users[i].username == username){
            string decryptedPassword = decryptPassword(users[i].encryptPassword);
            cout<<"Password for user '"<<username<<"' is: "<<decryptedPassword<<endl;
            return;
        }
    }
    cout<<"User not found"<<endl;
}
int main(){
    User users[10];
    int userCount = 0;
    int choice;
    int *arr = new int[10];
    
    while(true){
        cin>>choice;
        if(choice==1){
            string username,password;
            cin.ignore();
            getline(cin,username);
            // cin.ignore();
            getline(cin,password);
            registerUser(users,userCount,username,password);
        } else if(choice == 2){
            string username;
            cin.ignore();
            getline(cin,username);
            retrievePassword(users,userCount,username);
        } else if(choice == 3){
            break;
        } else {
            cout<<"Invalid choice"<<endl;
        }
    }
    delete []arr;
    return 0;
}
