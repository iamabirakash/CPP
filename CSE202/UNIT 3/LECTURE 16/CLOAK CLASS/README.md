You have been tasked with creating a simple program to set and display time using the Clock class. The Clock class is designed with a constructor that has default arguments for hours (h), minutes (m), and seconds (s) initialized to 0.



Use the Clock class to create an object representing this time and then display it in a 24-hour format with leading zeros for single-digit hours, minutes, and seconds.

Input format :
The input consists of three integers: hours (h), minutes (m), and seconds (s), representing the 24-hr format time.

Output format :
The output prints the time displayed in the format "hh:mm:ss",

If there is a single digit or 0 in h/m/s, fill it with zeros as shown in the sample outputs.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

0 ≤ h ≤ 23

0 ≤ m, s ≤ 59

Sample test cases :
Input 1 :
12 25 55
Output 1 :
12:25:55
Input 2 :
20 5 6
Output 2 :
20:05:06
Input 3 :
0 0 5
Output 3 :
00:00:05
