You are developing a stock trading platform that provides real-time market data to traders. As part of the system, you need to implement a feature that sorts the stock prices in non-decreasing order based on their value.



Write a program that prompts the user to enter the number of stocks and their respective prices. The program should then use the insertion sort algorithm to sort the stock prices in non-decreasing order. After each iteration of the insertion sort, the program should display the updated stock prices to reflect the current state of the sorting process.

Input format :
The first line of input consists of an integer n, representing the number of stocks.

The second line consists of n space-separated floating-point numbers, representing the prices of the stocks.

Output format :
The first line of output prints "Initial order: " followed by the initial array of elements, separated by space.

The following n-1 lines prints "After Iteration X: Y" where X is the iteration number and Y is the result of each iteration separated by space.

The last line of output prints "Sorted order: " followed by the final sorted array in non-decreasing order, separated by space rounded off to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ n ≤ 30

1.0 ≤ stocks ≤ 50.0

Sample test cases :

Input 1 :
4
16.37 21.51 12.90 18.80

Output 1 :
Initial order: 16.37 21.51 12.90 18.80 
After Iteration 1: 16.37 21.51 12.90 18.80 
After Iteration 2: 12.90 16.37 21.51 18.80 
After Iteration 3: 12.90 16.37 18.80 21.51 
Sorted order: 12.90 16.37 18.80 21.51 

Input 2 :
5
30.93 19.46 21.9 33.17 36.4

Output 2 :

Initial order: 30.93 19.46 21.90 33.17 36.40 
After Iteration 1: 19.46 30.93 21.90 33.17 36.40 
After Iteration 2: 19.46 21.90 30.93 33.17 36.40 
After Iteration 3: 19.46 21.90 30.93 33.17 36.40 
After Iteration 4: 19.46 21.90 30.93 33.17 36.40 
Sorted order: 19.46 21
