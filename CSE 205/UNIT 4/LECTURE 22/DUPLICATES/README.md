You work in a large warehouse where products are numbered from 0 to N-1. Your task is to identify any products that appear twice in the inventory list and report them in ascending order. This helps ensure accurate inventory management.



For instance, if you have N = 4 products with IDs {0, 1, 3, 2}, and no duplicates exist, you report -1. However, if you have N = 5 products with IDs {1, 1, 2, 2, 3}, you must report the duplicates in ascending order: 1 2. This ensures your warehouse maintains efficient inventory control. The input products must be listed in ascending order.



Now design a program using recursion to solve the given problem statement. 

Input format :
The first line contains an integer N, the size of the array.

The second line contains N space-separated integers a[0], a[1], ..., a[N-1], representing the elements in the array in ascending order.

Output format :
The output should be a space-separated list of integers.

If there are elements that occur twice in the given array, list them in ascending order.

If no such elements are found, the output should be "-1" to indicate that there are no duplicates.



Refer to the sample output for exact format specifications.

Code constraints :
1 <= N <= 25

The input should be in ascending order.

Sample test cases :
Input 1 :
4
0 1 2 3
Output 1 :
-1
Input 2 :
5
1 1 2 2 3
Output 2 :
1 2 
