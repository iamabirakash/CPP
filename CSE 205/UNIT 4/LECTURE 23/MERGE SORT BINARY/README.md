Arsha is working on a project where binary data is an essential part of the processing. To optimize data handling, Arsha needs to sort an array containing only two types of elements: 0s and 1s. Alex decides to implement a merge sort algorithm to efficiently sort this binary data.



Write a program to assist Arsha in implementing the logic of merge sort along with a recursive function to sort an array of binary data in ascending order.

Input format :
The first line contains an integer, representing the number of elements in the array.

The second line contains n space-separated integers, where each integer is either 0 or 1.

Output format :
The output displays the following result:



If the input contains elements other than 0 and 1, print "Invalid input".
Otherwise, print a single line containing n space-separated integers, representing the sorted array in ascending order.


Refer to the sample outputs for the exact format.

Code constraints :
1 ≤ n ≤ 20

input = 0, and 1 only

Sample test cases :
Input 1 :
5
1 0 1 0 1
Output 1 :
0 0 1 1 1 
Input 2 :
3
1 0 2
Output 2 :
Invalid input
Input 3 :
4
1 1 1 1
Output 3 :
1 1 1 1 
Input 4 :
2
0 0
Output 4 :
0 0 
