Create a program that manages distances using the Distance class. The program should allow you to input two distances in feet and inches, and it will calculate their sum. The Distance class contains methods for setting distances, adding distances, and displaying distances. The program will create two Distance objects: d1 and d2, where d2 is a copy of d1 using a copy constructor. It then calculates the sum of d1 and d2 and displays the result.



Note: 1 foot = 12 inches

Input format :
The first line should contain two integers representing the feet and inches of the first distance, separated by a space.

The second line should contain two integers representing the feet and inches of the second distance, also separated by a space.

Output format :
The output will display the sum of the two distances in the format X'Y", where X is the total feet and Y is the total inches.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ feet ≤ 100

1 ≤ inches ≤ 12

Sample test cases :
Input 1 :
10 1
20 1
Output 1 :
30'2"
Input 2 :
20 12
20 1
Output 2 :
41'1"
