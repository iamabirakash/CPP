Elsa is organizing a sequence of data stored in a singly linked list and aims to streamline the list by removing nodes positioned at even indices. The linked list nodes are inserted at the end by getting the input from the user.



Your task is to implement a program that reads the list data, removes the nodes at even positions, and outputs the modified list.



Company Tags: TCS

Input format :
The first line of input consists of an integer n, representing the number of elements in the linked list.

The second line contains n space-separated, each representing an element of the linked list.

Output format :
The first line of output displays "Original Linked List: " followed by the elements of the linked list before deletion.

The second line displays "Final Linked List: " followed by the elements of the linked list after the deletion of the even-positioned nodes.



Refer to the sample output for format specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1≤ n ≤ 100

-10000 ≤ elements ≤ 10000

Sample test cases :

Input 1 :

`5
100 200 300 10000 9999`

Output 1 :

Original Linked List: `100 200 300 10000 9999`

Final Linked List: `100 300 9999`

Input 2 :

`3
-10000 -2000 -3000`

Output 2 :

Original Linked List: `-10000 -2000 -3000`

Final Linked List: `-10000 -3000`
