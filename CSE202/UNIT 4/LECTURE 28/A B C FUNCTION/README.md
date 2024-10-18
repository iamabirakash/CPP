You are given three classes: A, B, and C. All three classes implement their own version of func.

In class A, func multiplies the value passed as a parameter by 2
In class B, func multiplies the value passed as a parameter by 3
In class C, func multiplies the value passed as a parameter by 5


Implement class D:



You need to modify the class D and implement the function update_val, which sets D's val to new_val by manipulating the value by only calling the functions defined in classes A, B, and C.



Input:

30



Output:

Value = 30

A's func called 1 times 

B's func called 1 times

C's func called 1 times



Explanation:

Initially, val =1

new_val = 30



A's function is called once:

val = val*2  

val = 2



B's function is called once:

val = val*3

val = 6



C's function is called once:

val = val*5

val = 30



val becomes 30, which is equal to the new_val. Here, each function is called once. It is guaranteed that new_val has only 2, 3, and 5 as its prime factors.

Input format :
The input consists of an integer value that has only 2, 3, and 5 as its prime factors.

Output format :
The first line displays an integer, representing the updated value Value = val.

The following lines display the number of times each function func() is called from classes A, B, and C respectively, formatted as:

A's func called x times
B's func called y times
C's func called z times


Refer to the sample output for the formatting specifications.

Code constraints :
The input value, new_val is an integer greater than or equal to 1.

Sample test cases :
Input 1 :
30
Output 1 :
Value = 30
A's func called 1 times
B's func called 1 times
C's func called 1 times
Input 2 :
150
Output 2 :
Value = 150
A's func called 1 times
B's func called 1 times
C's func called 2 times
