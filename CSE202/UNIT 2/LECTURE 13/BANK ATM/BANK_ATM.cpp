// You are using GCC
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class BankATM{
    int ATMID;
    string location;
    float availableCash;
    public:
        BankATM(int id, string loc, float cash){
            ATMID = id;
            location = loc;
            availableCash = cash;
        }
        void withdrawCash(float amount){
            if(amount<=availableCash){
                availableCash -= amount;
                cout<<"Withdrawal successful. Available cash: "<<fixed<<setprecision(1)<<availableCash<<endl;
            } else {
                cout<<"Insufficient cash in the ATM"<<endl;
            }
        }
        void depositCash(float amount){
            availableCash += amount;
            cout<<"Deposit successful. Available cash: "<<fixed<<setprecision(1)<<availableCash<<endl;
            
        }
        void displayCash(){
            cout<<"Available cash in ATM: "<<fixed<<setprecision(1)<<availableCash<<endl;
            
        }
};
int main(){
    int ATMID;
    string location;
    float availableCash, withdraw, deposit;
    cin>>ATMID;
    cin.ignore();
    getline(cin,location);
    cin>>availableCash;
    cin>>withdraw;
    cin>>deposit;
    BankATM a(ATMID, location, availableCash);
    a.withdrawCash(withdraw);
    a.depositCash(deposit);
    a.displayCash();
    return 0;
}
