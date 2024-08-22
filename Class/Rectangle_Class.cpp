//WAP TO CREATE A CLASS RECTANGLE WITH MEMBERS LENGTH AND BREADTH. PRINT THE AREA

#include<iostream>
using namespace std;
class rectangle
{
    public:
        int length;
        int breadth;
        void get()
        {
            cin>>length>>breadth;
        }
        void print()
        {
            cout<<"The Area is: "<<length*breadth;
        }
} s;
// int main()
// {
//     rectangle r;
//     r.get();
//     r.print();
// }

int main()
{
    s.get();
    s.print();
}
