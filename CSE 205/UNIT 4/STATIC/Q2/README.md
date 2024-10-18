John is organizing data in a binary search tree for quick retrieval. He needs a program that builds the tree and recursively performs inorder, preorder, and postorder traversals to display the elements in different orders. 



Help him implement the solution by creating the tree and performing the required traversals.

Input format :
The input consists of integers representing the choice and the corresponding operation.

If the choice is 1, enter the number of elements (n) and the elements to be inserted into the tree.

If the choice is 2, print the in-order traversal.

If the choice is 3, print the pre-order traversal.

If the choice is 4, print the post-order traversal.

If the choice is 5, exit.

Output format :
The output prints the results based on the choice.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 15

1 ≤ BST elements ≤ 1000

Sample test cases :
Input 1 :
1
5
12 78 96 34 59
2
3
4
5
Output 1 :
Inorder: 12 34 59 78 96 
Preorder: 12 78 34 59 96 
Postorder: 59 34 96 78 12 
Input 2 :
1
9
7 9 6 3 2 1 4 5 8
2
4
5
Output 2 :
Inorder: 1 2 3 4 5 6 7 8 9 
Postorder: 1 2 5 4 3 6
