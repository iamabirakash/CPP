// You are using GCC
#include<iostream>
using namespace std;
class NonFibonacciElements{
    int fibo[1000];
    int cnt;
    public:
        void generate(){
            int a = 0, b = 1;
            fibo[0] = a;
            fibo[1] = b;
            cnt = 2;
            while(true){
                int next = a + b;
                if(next>1000){
                    break;
                }
                fibo[cnt++] = next;
                a = b;
                b = next;
            }
        }
        bool isFibo(int num){
            for(int i=0;i<cnt;i++){
                if(fibo[i]==num){
                    return true;
                }
            }
            return false;
        }
        void filter(int arr[], int n){
            for(int i=0;i<n;i++){
                if(!isFibo(arr[i])){
                    cout<<arr[i]<<" ";
                }
            }
            cout<<endl;
        }
};
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    NonFibonacciElements e;
    e.generate();
    e.filter(a,n);
    return 0;
}
