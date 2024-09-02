// You are using GCC
#include<iostream>
using namespace std;
class IntegerManipulator{
    int a;
    public:
        void get(){
            cin>>a;
        }
        void digit(){
            int cnt = 0;
            int cnto = 0;
            int temp = a;
            while(temp!=0){
                int rem = temp%10;
                if(rem%2!=0){
                    cnto++;
                }
                temp = temp/10;
                cnt++;
            }
            cout<<"Number of digits: "<<cnt<<endl;
            cout<<"Number of odd digits: "<<cnto<<endl;
        }
} m;
int main(){
    m.get();
    m.digit();
}
