#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int a[r][c];
    int temp[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"NEW"<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            temp[i][j]=a[j][i];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            a[i][j]=a[j][i];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}
