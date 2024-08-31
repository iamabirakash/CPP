You are working on a mathematics application that requires merging two sorted lists of numbers into a single sorted list without any duplicates. Your task is to write a program that performs this merging operation on two lists of numbers.



Your program should merge the numbers from the first and second lists into a single sorted list, removing any duplicate numbers. The merged list should contain all the unique numbers, arranged in ascending order.



After merging the lists, your program should output the numbers in the merged list, according to the initial array.



Example



Input:

4

1 3 5 7

5

2 4 6 8 9

Output:

1 2 3 4

5 6 7 8 9

Explanation:

The first list has 4 numbers [1, 3, 5, 7], and the second list has 5 numbers [2, 4, 6, 8, 9]. After sorting, the list becomes [1, 2, 3, 4, 5, 6, 7, 8, 9] with duplicates removed and sorted in ascending order. After merging, the first list becomes [1, 2, 3, 4] and the second list becomes [5, 6, 7, 8, 9].



Company Tags: HCL

Input format :
The first line of input consists of an integer n, representing the size of the first sorted array.

The second line of input consists of n space-separated integers, representing the elements of the first sorted array.

The third line of input consists of an integer m, representing the size of the second sorted array.

The fourth line of input consists of m space-separated integers, representing the elements of the second sorted array.

Output format :
After sorting the array, the first line of output prints the first n sorted numbers, and the second line prints the last m numbers.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ n, m ≤ 10

1 ≤ array elements ≤ 25

Sample test cases :
Input 1 :
3
1 2 3
2
4 5
Output 1 :
1 2 3 
4 5 

Input 2 :
4
1 3 5 7
5
2 4 6 8 9
Output 2 :
1 2 3 4 
5 6 7 8 9 
