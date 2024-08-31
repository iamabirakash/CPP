You are working as a software developer for an online retail company. The company has tasked you with creating a program to merge two arrays that contain product IDs. 



The first array represents the product IDs of items currently in stock. The second array represents the product IDs of items in a customer's shopping cart. Your goal is to merge these two arrays into a single, sorted list of unique product IDs without any duplicates.

Input format :
The first line of input consists of an integer N, representing the number of products in the stock array.

The second line consists of N space-separated sorted integers representing the product IDs of the stock array.

The third line of input consists of an integer M, representing the number of products in the cart array.

The fourth line consists of M space-separated sorted integers representing the product IDs of the cart array.

Output format :
The output displays the merged array, which is the merged product IDs in sorted order without any duplicates.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ N, M ≤ 20

0 ≤ product IDs of the stock and cart array ≤ 100

Sample test cases :
Input 1 :
5
1 2 3 4 5
4
6 7 8 9
Output 1 :
1 2 3 4 5 6 7 8 9 

Input 2 :
6
2 3 5 7 8 9 
3
1 3 5
Output 2 :
1 2 3 5 7 8 9 
