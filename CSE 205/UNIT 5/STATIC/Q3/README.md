Tao is developing a program to manage a min-heap data structure for a small application. The program should enable Tao to insert elements, remove the root node, find the maximum value in the heap, and calculate the sum and average of all nodes in the heap.



The program must ensure that the min-heap property is maintained throughout these operations.

Input format :
The first line contains an integer n, representing the number of elements to be inserted into the min-heap.

The second line consists of n space-separated integers, representing which are the values to be inserted into the heap.

Output format :
The output displays the following format:

Print the elements of the min-heap in order, separated by spaces, on a single line.
Print the value of the root node after removing it.
Print the maximum value present in the heap after the removal operation.
Print the sum of all remaining nodes in the heap.
Print the average of all remaining nodes in the heap, rounded to two decimal places.


Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 10

1 ≤ values ≤ 10

Sample test cases :
Input 1 :
5
6 4 3 7 8
Output 1 :
Min Heap: 3 6 4 7 8 
Root node: 3
Maximum value: 8
Sum of nodes: 25
Average of nodes: 6.25
Input 2 :
5
3 9 2 6 8
Output 2 :
Min Heap: 2 6 3 9 8 
Root node: 2
Maximum value: 9
Sum of nodes: 26
Average of nodes: 6.50
