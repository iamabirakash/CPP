// You are using GCC
//DEVELOPING A SHAPE DRAWING APPLICATION THAT SUPPORTS IDFFERENT SHAPES, SUCH AS CIRCLES, RECTNAGLES AND TRIANGLES. EACH SHAPE HAS A 
//UNIQUE WAY OF DRAWING ITSELF. CREATE A BASE CLASS SHAPE WITH A VIRTUAL FUNCTION draw() THAT SHOULD BE OVERRIDDEN BY DERIVED CLASSES
//CIRCLE, RECTANGLE AND TRIANGLE.
//IMPLEMENT THIS STRUCT SO THAT CALLING draw() ON A *SHAPE POINTER TO ANY SPECIFIC SHAPE OBKECT DRAWS THE CORRECT SHAPE
#include<iostream>
using namespace std;
class shape{
    public:
        virtual void draw() = 0;
};
class Circle: public shape{
    public: 
        void draw(){ 
            cout<<"Drawing Circle\n"; 
        }
};
class Square: public shape{ 
    public: 
        void draw(){ 
            cout<<"Drawing Square\n"; 
        } 
}; 
class Triangle: public shape{ 
    public: 
        void draw(){ 
            cout<<"Drawing Triangle\n"; 
        } 
}; 
int main(){ 
    shape *sptr;
    Circle c;
    sptr = &c;
    sptr->draw();
    Square s;
    sptr = &s;
    sptr->draw();
    Triangle t;
    sptr = &t;
    sptr->draw();
}
