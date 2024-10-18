You are tasked with managing and processing numerical data using classes. Implement a class Parent that holds an integer attribute num. Create a derived class Child that inherits from Parent and includes a method fun() to process the integer num. 



The fun() method should compute and print the sum of the pairwise sums of the digits of num. If num has only one digit, it should print that digit directly.



For example, in the case of 1234, the individual digits are 4, 3, 2, 1, and the final sum → (4+3)+(4+2)+(4+1)+(3+2)+(3+1)+(2+1) = 30.

Input format :
The input consists of a single integer, num.

Output format :
The output displays a single integer number, which is the sum of all possible pairs of digits in num.

If the input number has only one digit, the program should output that digit itself.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ num ≤ 107

Sample test cases :
Input 1 :
1234
Output 1 :
30
Input 2 :
4356
Output 2 :
54
Input 3 :
5
Output 3 :
5
