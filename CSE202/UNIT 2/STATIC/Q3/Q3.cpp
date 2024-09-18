// You are using GCC
#include<iostream>
using namespace std;
class MatrixSum{
    int r,c;
    int a[10][10];
    public:
        void get(){
            cin>>r;
            cin>>c;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    cin>>a[i][j];
                }
            }
        }
        void print(){
            int cnt = 0;
            for(int i=0;i<r;i++){
                cnt = 0;
                for(int j=0;j<c;j++){
                    cout<<a[i][j]<<" ";
                    cnt += a[i][j];
                }
                cout<<"SUM: "<<cnt<<endl;
            }
        }
}m;
int main(){
    m.get();
    m.print();
}
