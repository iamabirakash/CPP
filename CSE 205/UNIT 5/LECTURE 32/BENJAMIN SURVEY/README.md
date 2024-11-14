Benjamin is conducting a survey to understand the age distribution of participants in a community event. He collects the ages and wants to identify how many participants are younger than a specified age threshold.



To organize the data efficiently, Benjamin uses a Min-Heap to sort the ages. After inputting the ages and the threshold age, he builds the Min-Heap and counts the number of participants younger than the specified age. Finally, Benjamin prints both the sorted ages and the count of younger participants for analysis.

Input format :
The first line contains an integer n, the number of participants.

The second line contains n space-separated integers representing the ages of the participants.

The third line contains an integer value, the age threshold to compare against.

Output format :
The first line prints the Min-Heap array after all elements have been inserted and the heap property has been maintained.

The second line prints the count of participants whose ages are less than the specified threshold age.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 15

1 ≤ age ≤ 100

1 ≤ age threshold ≤ 100

Sample test cases :
Input 1 :
5
5 3 8 1 4
4
Output 1 :
1 3 8 5 4 
2
Input 2 :
5
7 2 9 6 8
2
Output 2 :
2 6 9 7 8 
0
