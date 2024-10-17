#include <iostream>
using namespace std;

class Account {
protected:
    int customerID;
public:
    Account(int id) : customerID(id) {}
    virtual ~Account() {}
};

class FDAccount : virtual public Account {
protected:
    int fdID;
    int deposit;
    float interestRate;
    int months;
public:
    FDAccount(int id, int fdid, int dep, float rate, int mon) 
        : Account(id), fdID(fdid), deposit(dep), interestRate(rate), months(mon) {}

    float getMaturityAmount() {
        return (deposit * interestRate * months) / 100;
    }

    void displayFD() {
        cout << "Maturity Amount for the FD is: " << getMaturityAmount() << endl;
    }
};

class SavingsAccount : virtual public Account {
protected:
    int savingsID;
    int balance;
public:
    SavingsAccount(int id, int sid, int bal) 
        : Account(id), savingsID(sid), balance(bal) {}

    void depositMoney(int amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdrawMoney(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    void displaySavings() {
        cout << "Balance in the Savings is: " << balance << endl;
    }

    int getBalance() {
        return balance;
    }
};

class Report : public FDAccount, public SavingsAccount {
public:
    Report(int id, int fdid, int dep, float rate, int mon, int sid, int bal) 
        : Account(id), FDAccount(id, fdid, dep, rate, mon), SavingsAccount(id, sid, bal) {}

    void display() {
        cout << "Customer Data" << endl;
        cout << "Customer ID: " << customerID << endl;
        displayFD();
        displaySavings();
        cout << "Withdrawable Account Balance for the customer : " 
             << getBalance() + deposit << endl;
        cout << endl;
    }
};

int main() {
    // Input Data
    int customerID, fdID, deposit, months, savingsID, initialBalance, depositAmount, withdrawAmount;
    float interestRate;

    cin >> customerID >> fdID >> deposit >> interestRate >> months >> savingsID >> initialBalance >> depositAmount >> withdrawAmount;

    Report customer(customerID, fdID, deposit, interestRate, months, savingsID, initialBalance);

    customer.display();

    customer.depositMoney(depositAmount);
    customer.display();

    customer.withdrawMoney(withdrawAmount);
    customer.display();

    return 0;
}
