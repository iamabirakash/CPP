Nandha wants to delete a range of nodes between two given positions in a singly linked list. Write a program that takes input for the size of the linked list, the elements of the linked list, the start position, and the end position. The program should delete the nodes between the specified positions and display the updated linked list.



Company Tags: TCS

Input format :
The first line contains an integer 'n' representing the size of the linked list.

The second line contains 'n' space-separated integers representing the elements of the linked list.

The third line contains an integer 'S' representing the start position.

The fourth line contains an integer 'E' representing the end position.

Output format :
The first line of output displays "Linked List before deletion: " followed by the linked list before deletion.

The second line of output displays "Linked List after deletion: " followed by the linked list after deletion.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 100

-50000 ≤ elements ≤ 50000

1 ≤ S ≤ 100

1 ≤ E ≤ 100

Sample test cases :
Input 1 :
5
1 2 3 4 5
1
3
Output 1 :
Linked List before deletion: 1 2 3 4 5 
Linked List after deletion: 4 5 
Input 2 :
5
-50000 50000 4000 3676 7263
1
5
Output 2 :
Linked List before deletion: -50000 50000 4000 3676 7263 
Linked List after deletion: all the elements are deleted
