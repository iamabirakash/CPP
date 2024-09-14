Mandy is analyzing data stored in matrices and needs to determine the number of rows that contain at least one zero element. Help her with a program to count and print this information.

Input format :
The first line of input consists of two space-separated integers R and C, denoting the number of rows and columns in the matrix, respectively.

The next R lines contain C space-separated integers each, representing the elements of each row in the matrix.

Output format :
The output displays an integer, representing the number of rows in the matrix that contain at least one zero element.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ R, C ≤ 10

0 ≤ array elements ≤ 100

Sample test cases :
Input 1 :
3 4
1 2 3 0
5 0 7 8
9 5 4 1
Output 1 :
2
Input 2 :
3 3
3 0 3
9 8 0
0 3 1 
Output 2 :
3
Input 3 :
2 2
3 3
4 4
Output 3 :
0
Input 4 :
2 3
12 89 46
0 65 0
Output 4 :
1
