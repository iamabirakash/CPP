/*IMAGINE YOU ARE DEVELOPING APPLICATION THAT ALLOWS USER TO WITHDRAE MONEY FROM THEIR ACCOUNTS.
THE APPLICATION NEEDS TO CHECK IF THE USER HAS SUFFICIENT FUNDS FOR THE TRANSACTION.
IF THE USER TRIES TO WITHDRAW MORE MONEY THAN THEY HAVE IN THEIR ACCOUNT, THE PROGRAM SHOULD THROW AN EXCEPTION AND DISPLAY AN ERROR
MESSAGE.*/
#include<iostream>
using namespace std;
// int main(){
//     int balance,withdraw;
//     cin>>balance;
//     cin>>withdraw;
//     try {
//         if(withdraw>balance){
//             throw withdraw;
//         } else {
//             balance -= withdraw;
//             cout<<"Remaning balance: "<<balance;
//         }
//     } catch(int withdraw){
//         cout<<"You don't have sufficient fund :(";
//     }
// }
class bank{
    int balance,withdraw;
    public:
        bank(int b,int w){
            balance = b;
            withdraw = w;
        }
        void check(){
            if(withdraw>balance){
                cout<<"Exception: You don't have sufficient fund :(";
            } else {
                balance -= withdraw;
                cout<<"Remaning balance: "<<balance;
            }
        }
};
int main(){
    int b,w;
    cin>>b>>w;
    try {
        throw bank(b,w); //throwing class type exception.
    } catch(bank x){
        x.check();
    }
}
