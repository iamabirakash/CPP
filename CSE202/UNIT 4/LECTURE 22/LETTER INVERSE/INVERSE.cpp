// You are using GCC
#include<iostream>
#include<cstring>
using namespace std;
class CustomString{
    char str[100];
    public:
        CustomString(char *s){
            strcpy(str,s);
        }
        void display(){
            cout<<str;
        }
        CustomString operator!(){
            CustomString temp(str);
            for(int i=0;i<strlen(str);i++){
                if(str[i]>='A' && str[i]<='Z'){
                    temp.str[i] = str[i]+32;
                } else if(str[i]>='a' && str[i]<='z'){
                    temp.str[i]=str[i]-32;
                }
            }
            return temp;
        }
};
int main(){
    char str[100];
    cin.getline(str,100);
    CustomString s(str);
    CustomString inverted=!s;
    cout<<"Original String: ";
    s.display();
    cout<<endl;
    cout<<"Inverted String: ";
    inverted.display();
    cout<<endl;
    return 0;
}
