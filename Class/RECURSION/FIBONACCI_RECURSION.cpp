#include<iostream>
using namespace std;
class fibo{
    int n;
    public:
        int get(){
            cin>>n;
            return n;
        }
        int fibonacci(int n){
            if(n==0){
                return 0;
            } else if(n==1){
                return 1;
            } else {
                return (fibonacci(n-1)+fibonacci(n-2));
            }
        }
};
int main(){
    fibo f;
    int terms,i;
    int c;
    terms = f.get();
    for(i=0;i<terms;i++){
        c = f.fibonacci(i);
        cout<<c<<" ";
    }
    return 0;
}
