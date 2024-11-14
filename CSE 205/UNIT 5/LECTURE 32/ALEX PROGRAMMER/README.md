Alex is a competitive programmer preparing for a coding competition that requires him to manage and prioritize a set of scores. He wants to maintain a max heap to ensure he can quickly access the highest scores as he adds new scores to his list. Alex plans first to input his initial set of scores and then add more scores later. After building the max heap, he wants to display the scores in priority order from highest to lowest.



Write a program that constructs a max heap from an array of initial scores entered by Alex, allows him to insert additional scores, and then displays the resulting max heap structure.

Input format :
The first line contains an integer n representing the number of initial scores.

The second line contains n space-separated integers representing the initial scores.

The third line contains an integer m representing the number of new scores to be added.

The fourth line contains m space-separated integers representing the new scores to be added.

Output format :
The output displays a single line containing n+m space-separated integers representing the max heap structure, where the highest score is at the root.



Refer to the sample output for further format specifications.

Code constraints :
The test cases will fall under the following constraints:

1 ≤ n ≤ 10

1 ≤ initial scores ≤ 1000

1 ≤ m ≤ 10

1 ≤ new scores ≤ 1000

Sample test cases :
Input 1 :
10
3 5 9 6 8 20 10 12 18 9
3
4 23 16
Output 1 :
23 18 20 12 9 16 9 3 8 6 4 5 10 
Input 2 :
5
5 6 8 11 15
4
34 57 38 92
Output 2 :
92 57 34 38 8 6 15 5 1
