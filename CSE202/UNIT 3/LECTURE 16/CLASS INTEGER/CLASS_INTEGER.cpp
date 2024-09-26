// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class Integer{
    int i;
public:
    Integer(int value=0):i(value){}
    
    void setValue(int value){
        i = value;
    }
  
    void print(){
        cout<<i<<endl;
    }
};

int main(){
    int count;
    cin>>count;
    Integer c[count];
    for(int i=0;i<count;i++){
        if(i%2==1){
            c[i].setValue(10);
        }
    }
    for(int i=0;i<count;i++){
        c[i].print();
    }
    return 0;
}
