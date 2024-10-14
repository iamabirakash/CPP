Rithik is developing a system to compare the ages of people in a community. He wants to create a program that takes the ages of three people as input and determines if the first person has the same age as the second and third persons.



He decides to use a Person class to represent each individual and overload the == operator to compare their ages. The program should output whether the first person is the same age as the second and third persons.

Input format :
The input consists of three integers representing the ages, separated by a space.

Output format :
The output consists of two lines, each containing a sentence describing the comparison result between Person 1 and the other individuals.



Refer to the sample output for further formatting specifications.

Code constraints :
1 <= age <= 100

Sample test cases :
Input 1 :
23 45 23
Output 1 :
Person 1 is not the same age as Person 2.
Person 1 is the same age as Person 3.
Input 2 :
67 39 39
Output 2 :
Person 1 is not the same age as Person 2.
Person 1 is not the same age as Person 3.
Input 3 :
50 50 50
Output 3 :
Person 1 is the same age as Person 2.
Person 1 is the same age as Person 3.
Input 4 :
31 31 51
Output 4 :
Person 1 is the same age as Person 2.
Person 1 is not the sa
