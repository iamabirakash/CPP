Emily is given a binary tree where each node contains an integer value. She needs to construct the tree using a post-order traversal input, where -1 denotes a NULL node. After building the tree, compute and display the sum of all nodes and print the nodes in post-order traversal.



Can you help Emily with the tree creation?

Input format :
The input consists of a series of positive integers provided in a separate line.

To build the binary tree, enter its value first for each node. If a node has no left or right child, enter -1.

Output format :
The first line of the output displays the postorder traversal sequence of the binary tree.

The second line of the output displays the sum of all the nodes.



Refer to the sample output for formatting specifications.

Code constraints :
0 ≤ Value of the node ≤ 1000

Sample test cases :
Input 1 :
5
-1
-1
Output 1 :
Postorder Traversal: 5 
Sum of all nodes: 5
Input 2 :
70
25
-1
-1
-1
Output 2 :
Postorder Traversal: 25 70 
Sum of all nodes: 95
Input 3 :
5
2
-1
-1
7
-1
-1
Output 3 :
Postorder Traversal: 2 7 5 
Sum of all nodes: 14
