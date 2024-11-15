
Emma is a mathematics enthusiast who wants to analyze prime numbers for her research. She collects several integers and aims to create a max heap that only includes the prime numbers from her collection.



After inserting the prime numbers into the max heap, she wants to visualize the max heap structure to understand the hierarchy of these numbers.



Note

A prime number is a natural number greater than one that has no positive divisors other than one and itself.

Input format :
The first line contains an integer n, representing the number of integers Emma collected.

The second line consists of n space-separated integers, which are the values Emma wants to analyze.

Output format :
The output consists of two parts:

If any prime numbers were inserted into the max heap, display them as integers separated by a space.
If a number is not prime, print a message in the format: "<value> is not a prime number".


Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 10

1 ≤ values ≤ 100

Sample test cases :
Input 1 :
5
1 3 2 4 5
Output 1 :
1 is not a prime number
4 is not a prime number
Max Heap: 5 2 3 
Input 2 :
6
17 7 5 11 13 19
Output 2 :
Max Heap: 19 13 17 7 11 
