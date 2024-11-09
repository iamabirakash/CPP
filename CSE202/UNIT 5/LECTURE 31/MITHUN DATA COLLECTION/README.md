Mithun is developing a program for a data collection tool that allows the user to input a series of positive integers until they enter a negative value. 



The program should dynamically allocate memory for an integer array to store these numbers using the new operator. The program should then calculate and display the sum and average of the entered integers. Write a program to accomplish this task.

Input format :
The input consists of positive integers separated by a space. It continues until a negative value is entered.

Output format :
The first line prints the sum of all the integers (excluding the terminating negative integer) in the format: "Sum: X", where X is the sum of the integers.

The second line prints the average of all the integers (excluding the terminating negative integer) in the format: "Average: Y", where Y is the average, rounded to two decimal places.



Refer to the sample output for the formatting specifications.

Code constraints :
numbers > 0

Maximum number ≤100

Sample test cases :
Input 1 :
1 2 3 4 5 6 -1
Output 1 :
Sum: 21
Average: 3.50
Input 2 :
10 20 30 40 50 60 70 80 90 100 -4
Output 2 :
Sum: 550
Average: 55.00
