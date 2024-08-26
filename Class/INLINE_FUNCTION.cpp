#include<iostream>
using namespace std;
class BOOK{
        int membid;
        char name[20];
    public:
        void get(){
            cin>>membid>>name;
        }
        void put();
}b[5]; //array of object

void BOOK::put(){
    cout<<membid<<" "<<name<<endl;
}


int main(){
    for(int i=0;i<5;i++){
        b[i].get();
    }
    for(int i=0;i<5;i++){
        b[i].put();
    }
}
