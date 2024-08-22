// You are using GCC
//WAP TO CREATE A CLASS RECTANGLE WITH MEMBERS LENGTH AND BREADTH. PRINT THE AREA
#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
    void get()
    {
        cin>>length>>breadth;
    }
    public:
        void print()
        {
            get();
            cout<<"The Area is: "<<length*breadth;
        }
};

int main()
{
    rectangle r;
    r.print();
}
