You are developing a sports analytics system for a basketball team. As part of the system, you need to implement a feature that finds the second largest player's height from a given array of player heights.



Write a program that takes user input for the number of players and their respective heights. The program should use the selection sort algorithm to sort the player heights in non-increasing order. After sorting, it should display the sorted array of player heights and display the second largest player's height from the sorted list.

Input format :
The first line of input consists of an integer n, representing the number of players.

The second line of input consists of n space-separated integers, representing the heights of the players.

Output format :
The first line of output displays "Sorted array:" followed by n space-separated integers, representing the sorted array of player heights.

The second line of output displays "The second largest element is " followed by an integer, representing the second largest player's height.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ n ≤ 15

1 ≤ height ≤ 250

Sample test cases :

Input 1 :
5
135 169 185 174 212

Output 1 :
Sorted array: 212 185 174 169 135 
The second largest element is 185

Input 2 :
6
174 125 136 195 150 138

Output 2 :
Sorted array: 195 174 150 138 136 125 
The second largest element is
