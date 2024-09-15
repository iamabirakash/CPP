Maran is working on a programming problem involving an array of objects. He has created a class named ArrayElement to store integer values in an array. Now he needs to find the number of times a specific integer appears in the given array.



Write a program that helps Maran achieve this task. The program should create an array of objects of class ArrayElement, where each object contains an integer value. It should then find and display how many times a particular integer, srch_num, appears in the array.

Input format :
The first line contains an integer n, representing the number of elements in the array.

The second line contains n space-separated integers, each representing the values stored in the array.

The third line contains an integer, srch_num (the number to be searched).

Output format :
The output should display the following format:

If srch_num is found in the array, output the message "The number srch_num appears ctr times," where ctr is the count of occurrences.

If srch_num is not found in the array, output the message "The number srch_num is not found in the array".



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ n ≤ 15

1 ≤ array elements ≤ 1000

1 ≤ srch_num ≤ 1000

Sample test cases :
Input 1 :
13
1 5 2 1 2 5 5 5 5 3 5 7 5
5
Output 1 :
The number 5 appears 7 times
Input 2 :
13
1 5 2 1 2 5 5 5 5 3 5 7 5
15
Output 2 :
The number 15 is not 
