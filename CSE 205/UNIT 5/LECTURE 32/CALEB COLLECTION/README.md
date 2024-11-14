Caleb loves to organize his collection of rare coins, and he wants to ensure that he can quickly find any coin in his collection. To do this, he decides to implement a min-heap data structure. Caleb inputs the number of coins and their respective values, inserting each value into the min-heap.



After building the heap, he checks if a specific coin is present in his collection. He prints the entire heap and whether the coin is found, helping him maintain his collection efficiently.

Input format :
The first line contains an integer n, representing the number of elements.

The second line contains n integers separated by spaces, representing the values of the coins.

The third line contains an integer C, representing the value of the coin to check for presence in the heap.

Output format :
The first line outputs the elements of the min-heap in sorted order, separated by spaces.

The second line indicates whether the specified element is present in the heap, formatted as:

"C is present" if the element is found.
"C is not present" if the element is not found.


Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 15

1 ≤ value ≤ 1000

1 ≤ C ≤ 1000

Sample test cases :
Input 1 :
4
10 5 15 20
6
Output 1 :
5 10 15 20 
6 is not present
Input 2 :
5
8 3 12 7 25
7
Output 2 :
3 7 12 8 25 
7 is present
