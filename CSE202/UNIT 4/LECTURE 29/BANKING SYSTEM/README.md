Currently, all Banking systems have a single point of reporting for all the types of accounts that we maintain with them. You have been asked to emulate the one-stop screen for the customer login using various classes as given in the diagram below. The type of data associated with each class is also provided.



Use virtual base classes to aid you with the design. You should use the class names exactly as given in the diagram.







When we create an object of the Report class and call a method called display, it should display the details of all the data that the customer holds, right from the common customer ID that is stored in the account to the individual account details (FD and Savings).



It should also display the withdrawable balance for the customer, which will be the sum of the deposit value of the FD and the balance in the Savings.



You should also be able to add and withdraw money from the savings account.

Input format :
The first line consists of the customer ID, which is an integer.

The second line consists of the FD ID, which is an integer.

The third line consists of the FD deposit amount, which is an integer.

The fourth line consists of the rate of interest for the FD, which is a float.

The fifth line consists of the number of months for which the FD is opened which is an integer.

The sixth line consists of the Saving account number which is an integer.

The seventh line consists of the initial balance for the savings account.

The eighth line consists of the amount to be deposited to the savings account.

The ninth line consists of the amount to be withdrawn from the savings account.

Output format :
The output shall display the initial customer data when the account(s) are created (i.e., before the deposit to the savings). This should also display the maturity amount for the FD.

It will then show the customer's data once the amount is deposited into the savings account.

It then shows the customer's data once the amount is withdrawn from the savings account.



A new line space is printed after the last statement in the output.



Refer to the sample output for the formatting specifications.

Code constraints :
You have to use the class names as given in the problem description.

All deposit values should be greater than 0.

Sample test cases :
Input 1 :
2342343
2424295
10000
7.5
10
5343434
50000
6000
2000
Output 1 :
Customer Data
Customer ID: 2342343
Maturity Amount for the FD is: 7500
Balance in the Savings is: 50000
Withdrawable Account Balance for the customer : 60000

Customer Data
Customer ID: 2342343
Maturity Amount for the FD is: 7500
Balance in the Savings is: 56000
Withdrawable Account Balance for the customer : 66000

Customer Data
Customer ID: 2342343
Maturity Amount for the FD is: 7500
Balance in the Savings is: 54000
Withdrawable Account Ba
