// You are using GCC
#include<iostream>
#include<cstring>
using namespace std;
class Coordinates{
    int xx,yy;
    public:
        Coordinates(int x,int y){
            xx=x;
            yy=y;
        }
        void display(){
            cout<<xx<<" "<<yy;
        }
        Coordinates operator++(){
            ++xx;
            ++yy;
            
        }
};
int main(){
    int x,y;
    cin>>x>>y;
    Coordinates s(x,y);
    ++s;
    s.display();
    cout<<endl;
    return 0;
}
