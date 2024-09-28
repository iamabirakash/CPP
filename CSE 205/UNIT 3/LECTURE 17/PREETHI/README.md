Preethi is working on a ticketing system for a popular music concert. The ticketing system uses a queue data structure implemented using an array to manage incoming ticket requests. Each ticket request is represented by a unique identification number.



Your task is to implement the queue data structure and the associated functions to efficiently handle the ticket requests. 



One of the requirements is to reverse the order of the first K ticket requests in the queue while keeping the order of the remaining ticket requests intact.



The main functionalities of the ticketing system include:

Enqueue: Add a ticket request to the end of the queue.
Reverse First K Elements: Reverse the order of the first K ticket requests in the queue, using the queue implemented with an array.


Company Tags: Amazon

Input format :
The first line of input consists of an integer N, representing the number of ticket requests in the queue.

The second line consists of an integer K, representing the number of ticket requests to reverse.

The third line consists of N space-separated integers, representing the unique identification numbers of the ticket requests in the queue.

Output format :
The output prints the updated order of the ticket requests after reversing the first K requests. The output is the space-separated values.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 15

K < N

Sample test cases :
Input 1 :
8
3
101 102 103 104 105 106 107 108
Output 1 :
103 102 101 104 105 106 107 108 
Input 2 :
4
2
12 43 58 75
Output 2 :
43 12 58 75 
