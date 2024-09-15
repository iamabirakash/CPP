Sena wants to upskill in C++ by learning about member functions. Help him solve the following question: Create a class called BankATM to represent an ATM machine having attributes: ATM ID (integer), location (string), and available cash (float). 



Implement member functions to withdraw cash, deposit cash, and display the current available cash in the ATM.



Company Tags: Mettl 

Input format :
The input consists of the following in separate lines:

An integer value for the ATM ID.
A string for the location of the ATM.
A floating-point value for the available cash in the ATM.
A floating-point value representing the amount to withdraw.
A floating-point value representing the amount to deposit.
Output format :
The output prints the following:



For a successful withdrawal, it should display

"Withdrawal successful. Available cash: [cash]" where [cash] is the updated available cash in the ATM after withdrawal, displayed with one decimal place.
For an unsuccessful withdrawal: it should display: "Insufficient cash in the ATM"



After a successful deposit, it should display:

"Deposit successful. Available cash: [cash]" where [cash] is the updated available cash in the ATM after deposit, displayed with one decimal place.


Finally, it should display the available cash in the ATM:

"Available cash in ATM: [cash]" where [cash] is the available cash in the ATM, displayed with one decimal place.


Refer to the sample outputs for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

ATM id > 0

0 < available cash, amount to withdraw and deposit < 106

Sample test cases :
Input 1 :
1234
Main Street
1000.5
200.7
300.0
Output 1 :
Withdrawal successful. Available cash: 799.8
Deposit successful. Available cash: 1099.8
Available cash in ATM: 1099.8
Input 2 :
4321
High Street
1500.07
2000.5
3000.55
Output 2 :
Insufficient cash in the ATM
Deposit successful. Available cash: 4500.6
Available cash in ATM: 4
