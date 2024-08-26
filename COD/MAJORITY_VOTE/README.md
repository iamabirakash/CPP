During an election, a committee is tasked with identifying if there is a majority candidate based on the votes collected. 



A majority candidate is defined as a candidate who has received more than half of the total votes. 



Write a program that takes the number of votes and the votes themselves (represented by candidate IDs) as input. The program should then determine and display the majority candidate if one exists or indicate that no majority candidate was found.



Company Tags: TCS

Input format :
The first line of input contains a single integer n, the number of votes.

The second line contains n space-separated integers, where each integer represents a vote for a candidate ID.

Output format :
If there is a majority candidate (a candidate with more than half of the total votes), print the ID of the majority candidate.

Otherwise, print "No majority candidate found".



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 20

1 ≤ votes ≤ 10

Sample test cases :

Input 1 :
8
4 4 2 4 4 3 4 3
Output 1 :
The majority candidate is ID 4

Input 2 :
6
1 2 3 4 5 6
Output 2 :
No majority candidate 
