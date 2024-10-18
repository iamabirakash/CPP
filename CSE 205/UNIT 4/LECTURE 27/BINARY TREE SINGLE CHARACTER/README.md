In a binary tree where each node contains a single character, you need to build the tree by inserting characters in the order provided. After constructing the tree, perform a post-order traversal to print the characters. Ensure to manage memory properly by freeing the tree after traversal.

Input format :
The first line contains an integer n representing the number of characters to be inserted into the binary tree.

The second line contains n characters where each character is inserted into the tree in the given order.

Output format :
The output should be a single line with characters printed in the post-order traversal of the tree.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 26

Sample test cases :
Input 1 :
6
a f d e c b
Output 1 :
e c f b d a 
Input 2 :
5
a b c d e
Output 2 :
d e b c a 
