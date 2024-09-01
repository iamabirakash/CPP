You are working on a ticketing system for a popular event. As part of the system, you need to implement a feature that finds the kth smallest ticket price among all the available tickets.



Write a program that takes user input for the number of tickets and their respective prices. The program should use the selection sort algorithm to sort the ticket prices in non-decreasing order. After sorting, it should display the sorted order of the ticket prices and display the kth smallest ticket price from the sorted list.



Company Tags: Capgemini 

Input format :
The first line of input consists of an integer n, representing the number of tickets.

The second line of input consists of n space-separated integers, representing the prices of the tickets.

The third line of input consists of an integer k, representing the position of the ticket price to find (1-indexed).

Output format :
The first line of output displays "Sorted order: " followed by n space-separated integers, representing the sorted array of ticket prices.

The second line of output displays "The kth smallest element is: " followed by an integer, representing the kth smallest ticket price.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ n ≤ 15

1 ≤ k < n

1 ≤ ticket price ≤ 100

Sample test cases :

Input 1 :
5
1 4 7 8 5
3

Output 1 :

Sorted order: 1 4 5 7 8 
The kth smallest element is: 5

Input 2 :
9
7 9 6 8 4 5 3 2 1
6

Output 2 :
Sorted order: 1 2 3 4 5 6 7 8 9 
The kth smallest eleme
