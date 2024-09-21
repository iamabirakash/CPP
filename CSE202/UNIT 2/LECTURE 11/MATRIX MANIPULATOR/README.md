Amy has created a class called MatrixManipulator that reads a matrix, swaps two specified columns, and prints the modified matrix. Implement a program using this class to perform the column swap and display the resulting matrix.

Input format :
The first line of input consists of an integer T, representing the number of test cases.

For each test case:

The first line contains two integers R and C, representing the number of rows and columns in the matrix.
The next R lines each contain C space-separated integers, representing the matrix elements.
The last line contains two integers c1 and c2, representing the indices of the columns to be swapped (0-based).
Output format :
For each test case, print the matrix after swapping the specified columns.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ T ≤ 10

1 ≤ R, C ≤ 10

0 ≤ matrix element ≤ 1000

Sample test cases :
Input 1 :

`2` 

`3 3`

`1 2 3 
4 5 6 
7 8 9`

`0 2`

`2 2 
1 2`

`3 4 
1 0`

Output 1 :
3 2 1 
6 5 4 
9 8 7 
2 1 
4 3 
Input 2 :
1
3 3 
8 5 3 
4 1 6 
7 2 9 
2 1 
Output 2 :
8 3 5 
4 6 1 
7 9 2 
