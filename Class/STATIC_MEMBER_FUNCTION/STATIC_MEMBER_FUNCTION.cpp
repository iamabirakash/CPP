#include<iostream>
using namespace std;
class admin{
    int roll;
    double marks;
    char name[20];
    static int regno;
    public:
        void get(){
            cin>>name>>roll>>marks;
            regno++;
        }
        void put(){
            cout<<name<<" "<<marks<<" "<<roll<<" "<<regno<<endl;
        }
};
int admin::regno = 2000;
int main(){
    admin a[3];
    for(int i=0;i<3;i++){
        a[i].get();
    }
    for(int i=0;i<3;i++){
        a[i].put();
    }
    
}


// #include<iostream>
// using namespace std;
// class admin{
//     int roll;
//     double marks;
//     char name[20];
//     static int regno;
//     public:
//         void get(){
//             cin>>name>>roll>>marks;
//             regno++;
//         }
//         void put(){
//             get();
//             cout<<name<<" "<<" "<<roll<<marks<<" "<<regno<<endl;
//         }
// };
// int admin::regno = 2000;
// int main(){
//     admin a[3];
//     // for(int i=0;i<3;i++){
//     //     a[i].get();
//     // }
//     for(int i=0;i<3;i++){
//         a[i].put();
//     }
    
// }
