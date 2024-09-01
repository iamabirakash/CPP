You're managing employee records for a company. The employee IDs from two different departments are stored in two separate arrays, both sorted in ascending order. Your task is to merge these two sorted arrays into a single sorted array, ensuring that the order is maintained.

Input format :
The first line of input contains an integer n, representing the number of employees in the first department.

The second line contains n space-separated integers, each representing a sorted employee ID from the first department.

The third line contains an integer m, representing the number of employees in the second department.

The fourth line contains m space-separated integers, each representing a sorted employee ID from the second department.

Output format :
The output prints the merged sorted employee IDs from both departments.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

0 ≤ n, m ≤ 10

101 ≤ employee ID ≤ 990

Sample test cases :

Input 1 :
4
101 203 305 407
4
102 204 306 408

Output 1 :
101 102 203 204 305 306 407 408 

Input 2 :
4
101 203 305 407
4
203 305 508 609

Output 2 :
101 203 203 305 305 407 508 609 

Input 3 :
3
102 204 306
0

Output 3 :
102 204 306 

Input 4 :
2
101 202
4
150 250 350 450

Output 4 :
101 150 202 250 350 450 
