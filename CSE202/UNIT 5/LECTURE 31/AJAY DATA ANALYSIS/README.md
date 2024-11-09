Ajay is developing a program for a data analysis tool that requires processing a list of N integers provided by the user.



His program should dynamically allocate memory for three dynamic arrays using the new operator: one for storing the user-input integers, one for storing odd numbers from the list, and the other for storing even numbers from the list. The program should then display separate lists of odd and even integers. Write a program to accomplish this task.

Input format :
The first line consists of the size of the array.

The second line consists of the array of elements, separated by a space.

Output format :
If n is less than or equal to zero, print:

"Number of integers should be positive!"



If n is positive:

Print "List of Odd Integers: " followed by the odd integers in the input, or -1 if there are no odd integers.

Print "List of Even Integers: " followed by the even integers in the input, or -1 if there are no even integers.



Refer to the sample output for the formatting specifications.

Code constraints :
1 <= size <= 100

Sample test cases :
Input 1 :
6
1 2 3 4 5 6
Output 1 :
List of Odd Integers: 1 3 5 
List of Even Integers: 2 4 6 
Input 2 :
-4
Output 2 :
Number of integers should be positive!
Input 3 :
4
1 3 7 9
Output 3 :
List of Odd Integers: 1 3 7 9 
List of Even Integers: -1
Input 4 :
3
2 4 8
Output 4 :
List of Odd Integers: -1
List of Even Integers:
