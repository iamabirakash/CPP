Emma is a data analyst working on a project where she needs to maintain a max heap of scores collected from various sports events. After collecting the scores, she wants to build the max heap and calculate the sum of the highest and lowest scores in the heap.



Your task is to help Emma by implementing a program that builds the max heap from the input scores and computes the required sum.

Input format :
The first line contains an integer N, representing the number of scores Emma will input.

The second line consists of N space-separated integers, representing the individual scores.

Output format :
The first line displays N space-separated integers, representing the max heap in a single line, with scores separated by spaces.

The second line displays an integer representing the sum of the highest score (root of the max heap) and the lowest score (last element of the heap).



Refer to the sample output for exact format specifications.

Code constraints :
1 ≤ N ≤ 20

1 ≤ scores ≤ 1000

Sample test cases :
Input 1 :
4
6 10 8 5
Output 1 :
10 6 8 5 
15
Input 2 :
6
18 39 46 38 76 89
Output 2 :
89 46 76 18 38 39 
128
Note :
