Anu has recently taken up gardening and wants to keep track of the heights of the plants she grows. She decides to use a max heap data structure to maintain the heights, ensuring that the tallest plant is always at the top.



As she plants new ones, she inserts their heights into the heap and occasionally checks the current maximum height. After planting, she wants to see the heights in the max heap, along with the squared values of each height to calculate the total area they might cover.

Input format :
The first line contains an integer n, representing the number of elements.

The second line contains n space-separated integers, each representing the heights of the plants.

Output format :
The first line should display the elements of the max heap in level order.

The second line should display the squared values of each element in the max heap, also in the same order.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 15

1 ≤ height ≤ 150

Sample test cases :
Input 1 :
5
10 20 5 15 25
Output 1 :
25 20 5 15 10 
625 400 25 225 100 
Input 2 :
3
30 12 18
Output 2 :
30 12 18 
900 144 324 
