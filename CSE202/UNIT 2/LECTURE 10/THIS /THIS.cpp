// You are using GCC
#include<iostream>
using namespace std;
class check{
    int n;
    int m;
    public:
        void get(int n, int m){
            this->n=n;
            this->m=m;
        }
        void put(){
            if(this->n!=this->m){
                cout<<"The values are not equal";
            } else {
                cout<<"The values are equal";
            }
        }
};
int main(){
  check obj1;
  int n,m;
  cin>>n>>m;
  obj1.get(n,m);
  obj1.put();
}
