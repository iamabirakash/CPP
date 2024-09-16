In a warehouse, a system keeps track of packages using a grounded header linked list where each node represents a package. Each package is added to the end of the list. Sometimes, packages need to be removed from specific positions in the list. 



Your task is to implement this system which can add packages to the list, display the list, and remove a package from a specified position.

Input format :
The first line contains an integer, n, which represents the number of packages to be added to the list.

The second line contains n integers, each representing the ID of a package.

The third line contains an integer, position, which indicates the position of the package to be removed from the list (1-based index).

Output format :
The first line of output represents the elements before deletion and the next line represents the remaining elements in the linked list after deleting the particular value.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 25

1 ≤ elements ≤ 100

Sample test cases :
Input 1 :
5
10 20 30 40 50
2
Output 1 :
Linked List before deletion: 10 20 30 40 50 
Linked List after deletion: 10 30 40 50 
Input 2 :
5
12 23 43 56 89
5
Output 2 :
Linked List before deletion: 12 23 43 56 89 
Linked List after dele
