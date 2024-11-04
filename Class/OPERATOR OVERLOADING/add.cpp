//WAP TO CREATE A CLASS OVERLOADING WITH MEMBERS LENGTH AND BREADTH ||CREATE TWO OBJECTS obj1 and obj2 ADD LENGTH OF 
//obj1 and obj2 and breadth of obj1 and obj2.
#include<iostream>
using namespace std;
class test{
    int length,breadth;
    public:
        test(int l=0,int b=0) {
            length = l;
            breadth = b;
        }
        test operator+(test obj){
            test temp;
            temp.length = length+obj.length;
            temp.breadth = breadth+obj.breadth;
            return temp;
        }
        void print(){
            cout<<"Length is: "<<length<<" and Breadth is: "<<breadth;
        }
};
int main(){
    test obj1(10,5),obj2(10,3);
    test summ = obj1+obj2;
    summ.print();
}
