// You are using GCC
//WAP TO CREATE A CLASS ARRAY PERFORM LINEAR SERACH USING CLASS template
#include<iostream>
using namespace std;
template<class T1>
class T{
    public:
    T1 a[5];
    T1 key;
    void get(){
        for(int i=0;i<5;i++){
            cin>>a[i];
        }
        cin>>key;
    }
    void search(){
        bool check = false;
        for(int i=0;i<5;i++){
            if(a[i]==key) check=true;
        }
        if(check) cout<<"Found";
        else cout<<"Not Found";
    }
};
int main(){
    T <int>a;
    a.get();
    a.search();
}
