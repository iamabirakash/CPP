Alice wants to design a program that identifies palindrome numbers within an array of integers. Create a program that accomplishes this task while dynamically managing memory allocation using new and delete.



Note: It is assumed that at least one element in the array is a palindromic number.

Input format :
The first line of input consists of an integer N, representing the size of the array.

The second line consists of N space-separated integers, representing the elements of the array.

Output format :
The output displays the palindrome numbers that are present in the array separated by space.



Note: Beginning zeros are ignored while calculating the palindrome as shown in the sample test case #3.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ N ≤ 10

1 ≤ elements of the array ≤ 109

Sample test cases :
Input 1 :
5
121 12321 456 789 12121
Output 1 :
121 12321 12121 
Input 2 :
3
45678 1234321 987654
Output 2 :
1234321 
Input 3 :
3
111 010 100
Output 3 :
111 
