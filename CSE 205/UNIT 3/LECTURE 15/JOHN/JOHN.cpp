// You are using GCC
#include<iostream>
using namespace std;
int a[15],top=-1;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(top<14){
            a[++top]=x;
        }
    }
    for(int i=top;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int x[15];
    int newtop = -1;
    for(int i=top;i>=0;i--){
        if(a[i]%2!=0){
            x[++newtop] = a[i];
        }
    }
    for(int i=0;i<=newtop;i++){
        a[i] = x[i];
    }
    top = newtop;
    for(int i=0;i<=top;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
