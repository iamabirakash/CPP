//WAP TO CREATE A CLASS RECTANGLE WITH PRIVATE MEMBERS LENGTH AND BREADTH WHERE LENGTH AND BREADTH ARR ALLOCATED DYNAMICALLY. COMPUTE THE AREA OF THE RECTANGLE AND THEN DEALLOCATE THE MEMEORY AFTER USE.
#include<iostream>
using namespace std;
class rectangle{
    int *l,*b;
    public:
        void get(){
            l = new int(5);
            b = new int;
            cin>>*b;
        }
        void area(){
            cout<<*l*(*b);
        }
        ~rectangle(){
            delete l,b;
            cout<<"\nMemory Allocation"<<endl;
        }
};
int main(){
    rectangle r;
    r.get();
    r.area();
}
