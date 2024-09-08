Lisa wants to create a linked list sorted in ascending order. She wants to insert nodes in such a way that the linked list remains sorted after insertion.



Write a program that takes the number of nodes to be inserted, followed by their values in non-decreasing order. The program should then ask for a new value and insert a node with that value at the appropriate position to maintain the sorted order.



Finally, the program should print the updated linked list.



Example



Input:

`5

1 3 5 7 9

4`



Output:

`1 3 4 5 7 9`

Explanation:

The program first creates a sorted linked list using the given input values: 1, 3, 5, 7, and 9. After creating the initial sorted linked list, the program asks for a new value, which is 4. It then inserts a node with value 4 at the appropriate position to maintain the sorted order. Finally, the program prints the updated linked list, which is 1, 3, 4, 5, 7, and 9 in ascending order.

Company tags: Wipro

Input format :

The first line of input consists of an integer n, representing the number of elements in the initial sorted linked list.

The second line of input consists of n space-separated integers, representing the elements of the sorted linked list.

The third line of input consists of integer data, which represents the element to be inserted into the linked list.

Output format :

The output displays the updated linked list after inserting the new element, separated by space.

The linked list should remain sorted in ascending order.



Refer to the sample output for the formatting specifications.

Code constraints :

In this scenario, the test cases fall under the following constraints:

1 ≤ n ≤ 10

-100 ≤ elements, data ≤ 100

Sample test cases :

Input 1 :

`5
1 3 5 7 9
4`

Output 1 :

`1 3 4 5 7 9`

Input 2 :

`6
-15 -10 0 5 9 10
7`

Output 2 :
`
-15 -10 0 5 7 9 10 `
