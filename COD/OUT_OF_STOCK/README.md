Imagine you are developing an e-commerce system that manages product inventory. The system uses an array to store the product IDs. Your task is to implement a program that removes out-of-stock products from the array.



Note: Products that are out-of-stock are represented by 0. 

Input format :
The first line of input contains an integer n, the number of products in the inventory.

The second line contains n space-separated integers, where each integer represents a product.

Output format :
The output prints a single line containing the remaining products in the inventory, separated by spaces, in the order they appeared, excluding the out-of-stock products.



Refer to the sample output for formatting specifications.

Code constraints :

`1 ≤ n ≤ 25`

`0 ≤ product ID ≤ 50`

Sample test cases :

Input 1 :

6

1 2 3 4 0 5

Output 1 :
1 2 3 4 5 

Input 2 :
8
1 0 2 0 3 0 4 0

Output 2 :
1 2 3 4 
