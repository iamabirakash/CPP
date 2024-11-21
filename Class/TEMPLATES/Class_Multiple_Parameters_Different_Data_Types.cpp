/* WAP TO CREATE A CLASS USING TEMPLATE abc WITH MEMEBRS x y z ALL THREE MEMBERS MUST BE OF DIFFERENT TYPES*/
#include<iostream>
using namespace std;
template<class a,class b,class c>
class abc{
    a x;
    b y;
    c z;
    public:
        abc(){
            cin>>x>>y>>z;
            cout<<x<<" "<<y<<" "<<z;
        }
};
int main(){
    abc <int,float,char>p;
    return 0;
}
