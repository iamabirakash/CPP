In a small garment manufacturing company, the manager wants to track the production of different types of clothes each day. The factory produces three main types of garments: shirts, pants, and jackets. To better manage inventory, the manager decides to represent the daily production of these garments in a hierarchical structure, where each type of garment is assigned a specific production count.



The production of shirts is considered the root of the structure.
The production of pants is considered the left child of the shirts.
The production of jackets is considered the right child of the shirts.


The manager needs to calculate the total production count for the day by summing up the production numbers of all three types of garments.



Write a program that takes the production count of shirts, pants, and jackets as input and outputs the total sum of all garments produced that day using preorder traversal.

Input format :
The first line contains an integer, val1, representing the number of shirts produced.

The second line contains an integer, val2, representing the number of pants produced.

The third line contains an integer, val3, representing the number of jackets produced.

Output format :
The output displays a single line as an integer, representing the total sum of all garments produced in the following format:

"Total sum of all clothes: <totalSum>".



Refer to the sample output for the formatting specifications.

Code constraints :
0 <= val1, val2, val3 <= 1000

Sample test cases :
Input 1 :
6 7 8
Output 1 :
Total sum of all clothes: 21
Input 2 :
76 89 78
Output 2 :
Total sum of all clothes
