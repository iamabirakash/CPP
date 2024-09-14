Saru is working as a sales analyst for a retail company. His task is to analyze the sales data and determine the frequency of each product sold during a specific period. Since there are many products piled up together as it is a selling season, she is unable to do everything manually.



She decided to write a program that calculates the frequency of each product sold. As she is super busy, she is unable to concentrate on writing the code. Help her write the code for the same so that she can report the frequency of each product sold to her head using pointer arithmetic.

Input format :
The first line contains an integer n, the number of products sold.

The second line contains n integers, representing the product IDs of the sold products.

Output format :
For each unique element in the array, output a line in the format: "element - count time(s)".

The output should be in ascending order of the product ID.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ n ≤ 20

1 ≤ product ID ≤ 100

Sample test cases :
Input 1 :
6
15 15 87 985 78 87
Output 1 :
15 - 2 times
78 - 1 time
87 - 2 times
985 - 1 time
Input 2 :
5
2 2 2 2 2
Output 2 :
2 - 5 times
