Lucas is analyzing a sorted list of numbers and wants to find the first and last occurrences of a specific target value in the list. 



Given a sorted array of integers and a target value, write a program using binary search to find the indices of the first and last occurrences of the target value. If the target value is not found in the array, indicate that as well.

Input format :
The first line of input consists of n, the number of elements in the list.

The second line consists of n elements, separated by space.

The third line consists of the target value t.

Output format :
If the target value is found, print the index of the first and last occurrence. The index starts from 0.

If the target value is not found, print "Target value [t] is not found in the array."



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 25

1 ≤ elements, t ≤ 100

Sample test cases :
Input 1 :
6
12 24 24 37 41 53
24
Output 1 :
The first occurrence of 24 is at index 1
The last occurrence of 24 is at index 2

Input 2 :
6
12 24 24 37 41 53
52
Output 2 :
Target value 52 is not found in the array

Input 3 :
6
12 24 25 37 41 53
37
Output 3 :
The first occurrence of 37 is at index 3
The last occurrence of
