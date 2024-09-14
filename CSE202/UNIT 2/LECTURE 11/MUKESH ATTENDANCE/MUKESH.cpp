// You are using GCC
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string name;
    int attendance;
    cin>>n;
    string a[n];
    int b[n];
    // get(n);
    for(int i=0;i<n;i++){
        cin>>name>>attendance;
        a[i] = name;
        b[i] = attendance;
    }
    cout<<"Attendance Report:"<<endl;
    for(int i=0;i<n;i++){
        if(b[i]==1){
            cout<<a[i]<<": "<<"Present"<<endl;
        } else {
            cout<<a[i]<<": "<<"Absent"<<endl;
        }
    }
}
