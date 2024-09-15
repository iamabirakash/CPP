// You are using GCC
#include<iostream>
using namespace std;
class ArrayElement{
    int n;
    int a[1000];
    int search;
    public:
        void get(){
            cin>>n;
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            cin>>search;
        }
        void put(){
            int cnt = 0;
            for(int i=0;i<n;i++){
                if(a[i]==search){
                    cnt++;
                }
            }
            if(cnt>0){
                cout<<"The number "<<search<<" appears "<<cnt<<" times";
            } else {
                cout<<"The number "<<search<<" is not found in the array";
            }
        }
};
int main(){
    ArrayElement e;
    e.get();
    e.put();
}
