You are tasked with organizing a set of numbered disks (1 to n) on three pegs labelled A, B, and C. The disks are initially stacked in ascending order of size on peg A. Your goal is to move all the disks from peg A to peg C using the Towers of Hanoi game rules.



Each move involves transferring one disk at a time, and you must follow the rules:

Only one disk can be moved at a time.
Each move consists of taking the top disk from one of the pegs and placing it on top of another peg.
A larger disk cannot be placed on top of a smaller disk.


You need to write a recursive function, countMoves(n), that takes the number of disks n as input and returns the total number of moves required to solve the Towers of Hanoi problem.



For example, if the number of disks is 3, the disks can be transferred as follows: The total number of moves made is 7.

Lightbox



Note: This question helps in clearing Capgemini recruitment.

Input format :
The input consists of an integer denoting the number of disks.

Output format :
The output displays the sequence of moves required to solve the Tower of Hanoi puzzle, along with the total number of moves.



Refer to the sample output for formatting specifications.

Code constraints :
0 < n ≤ 8

Sample test cases :
Input 1 :
3
Output 1 :
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
Total number of moves: 7
Input 2 :
2
Output 2 :
Move disk 1 from A to B
Move disk 2 from A to C
Move disk 1 from B to C
Total number of moves: 
