// You are using GCC
#include<iostream>
using namespace std;
class MatrixManipulator{
    int r,c;
    int a[10][10];
    int c1,c2;
    public:
        void get(){
            // cin>>T;
            cin>>r>>c;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    cin>>a[i][j];
                }
            }
            cin>>c1>>c2;
        }
        void put(){
            for(int i=0;i<r;i++){
                int temp = a[i][c1];
                a[i][c1] = a[i][c2];
                a[i][c2] = temp;
            }
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    cout<<a[i][j];
                }
                cout<<endl;
            }
        }
};
int main(){
    MatrixManipulator m;
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        m.get();
        m.put();
    }
}
