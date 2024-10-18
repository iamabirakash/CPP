Sam needs to sort an array of integers using the divide-and-conquer method. He wants to implement the merge sort algorithm, displaying the array after each iteration to track the sorting process. 



Assist him in writing a program that divides the array, merges it back, and prints the array.

Input format :
The first line of input consists of an integer n, denoting the array size.

The second line consists of n space-separated integers, representing the array of elements.

Output format :
The first line of output prints the given array.

The following lines print the sorted array, after each iteration.

The last line of output prints the final sorted array.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 20

0 ≤ array elements ≤ 50

Sample test cases :
Input 1 :
6
4 1 5 3 2 6
Output 1 :
Given Array
4 1 5 3 2 6 
After iteration 1
1 4 5 3 2 6 
After iteration 2
1 4 5 3 2 6 
After iteration 3
1 4 5 2 3 6 
After iteration 4
1 4 5 2 3 6 
After iteration 5
1 2 3 4 5 6 
Sorted Array
1 2 3 4 5 6 
Input 2 :
8
8 1 7 2 6 3 5 4
Output 2 :
Given Array
8 1 7 2 6 3 5 4 
After iteration 1
1 8 7 2 6 3 5 4 
After iteration 2
1 8 2 7 6 3 5 4 
After iteration 3
1 2 7 8 6 3 5 4 
After iteration 4
1 2 7 8 3 6 5 4 
After iteration 5
1 2 7 8 3 6 4 5 
After iteration 6
1 2 7 8 3 4 5 6 
After iteration 7
1 2 3 4 5 6 7 8 
Sorted Array
1 2 3 4 5 6 7 8 
