Write a program to implement a priority queue using an array-based approach. 



The priority queue should support the following operations: insert an element into the priority queue with a specified priority, remove the element with the highest priority from the priority queue, and print the elements in the order of their priorities.



Company Tags: Wipro

Input format :
The first line of input consists of an integer N, representing the number of elements to be inserted into the priority queue.

This is followed by N lines, each containing two space-separated integers: element and priority. 1 has the highest priority.

Output format :
The first line of output prints the initial state of the priority queue after inserting all the elements, based on priority.

The second line prints the state of the priority queue after performing the dequeue operation.



Refer to the sample output for the exact text and format.

Code constraints :
The priority queue can store up to 100 elements (MAX_SIZE = 100).

Sample test cases :
Input 1 :
5
4 2
3 1
6 4
2 3
1 5
Output 1 :
Priority Queue: 3 4 2 6 1 
Priority Queue: 4 2 6 1 
Input 2 :
3
9 1
2 2
7 3
Output 2 :
Priority Queue: 9 2 7 
Priority Queue: 2 7 
