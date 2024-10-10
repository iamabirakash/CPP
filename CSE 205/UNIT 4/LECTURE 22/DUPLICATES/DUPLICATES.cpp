// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    int dup = 0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            if(dup==0 || b[dup-1]!=a[i]){
                b[dup] = a[i];
                dup++;
            }
        }
    }
    if(dup==0){
        cout<<-1<<endl;
    } else {
        for(int i=0;i<dup;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
