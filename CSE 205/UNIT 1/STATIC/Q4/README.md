You're an instructor managing a list of exam scores for a group of students. The scores are stored in an array, and you need to sort this array in ascending order so that you can easily identify the highest and lowest scores. You'll use two different sorting algorithms: bubble sort and selection sort.



Bubble sort is selected if the array is nearly sorted. An array is considered nearly sorted if at most one pair of elements is out of order. The selection sort is chosen if the array is not nearly sorted.

Input format :
The first line of input contains an integer n, representing the number of students.

The second line contains n space-separated integers, representing the exam scores of students.

Output format :
The first line of output prints which sort algorithm is used, either "Using Bubble Sort" or "Using Selection Sort".

The second line prints the sorted exam scores in ascending order.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 20

1 ≤ exam score ≤ 100

Sample test cases :

Input 1 :
6
64 78 85 92 99 73

Output 1 :
Using Bubble Sort
Sorted Exam Scores: 64 73 78 85 92 99 

Input 2 :
5
32 91 53 76 28

Output 2 :
Using Selection Sort
Sorted Exam Scores: 28
