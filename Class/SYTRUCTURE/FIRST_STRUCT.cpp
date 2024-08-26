#include<iostream>
using namespace std;
struct emp {
    int eid,salary;
    char name[20];
    void get(){
        // for(int i=0;i<4;i++){
        // }
            cin>>eid>>name>>salary;
    }
    void put(){
        if(eid==2){ //if(strcmp(e[i].name,"abc")==0)
            cout<<eid<<" "<<name<<" "<<salary<<endl;
        }
    }
} e[4];
int main(){
    for(int i=0;i<4;i++){
        e[i].get();
    }
    bool check = false;
    for(int i=0;i<4;i++){
        if(e[i].eid==2){
            e[i].put();
            check = true;
        }
    }
    if(!check){
        cout<<"Data not found";
    }
}
