Kamal is interested in managing a collection of integers using a Binary Search Tree (BST). He wants to write a program that constructs a BST from a given set of integers and then deletes all the nodes with values greater than the average value of all nodes in the BST.



Help him solve this problem.



Example



Input:

5

10 20 30 40 50

Output:

10 20 30

Explanation:

The sum of values is 10 + 20 + 30 + 40 + 50 = 150, and there are 5 nodes. So, the average is 150 / 5 = 30. Then, delete nodes with values greater than the average (30). The final output is the values of the remaining nodes in the BST, which are 10, 20 and 30.

Input format :
The first line consists of an integer N, representing the number of elements in the BST.

The second line consists of N space-separated integers, representing the BST elements.

Output format :
The output prints the remaining integers in the BST after deleting nodes greater than the average value, separated by a space.

The integers should be printed in an in-order traversal.



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases will fall under the following constraints:

1 ≤ N ≤ 20

1 ≤ elements ≤ 1000

Sample test cases :
Input 1 :
5
10 20 30 40 50
Output 1 :
10 20 30 
Input 2 :
6
20 52 65 98 74 57
Output 2 :
20 52 57 
