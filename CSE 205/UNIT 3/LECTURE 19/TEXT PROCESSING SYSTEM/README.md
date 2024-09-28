Imagine you are working on a text processing system for a search engine. As part of the system, you need to implement a pattern-matching algorithm using a sliding window approach. 



Given a large text document and a pattern, you are required to find all occurrences of the pattern in the text document efficiently.



Your task is to write a program that performs the following operations:

Read the large text document and store it in memory.
Read the pattern from the user.
Implement a sliding window algorithm using a linked list-based deque to find all occurrences of the pattern in the text document.
Display the positions (starting indices) of all occurrences of the pattern in the text document.


Write a program to implement the above operations and display the positions of all occurrences of the pattern in the text document.



Company Tags: TCS

Input format :
The first line of input consists of a sequence of strings.

The second line consists of the pattern to be found in the given string.

Output format :
If the pattern is found in the string, print the index or indexes where the pattern occurs (index starts from 0)

If the pattern is not found, print "Pattern not found".

If the pattern is longer than the string, print "Pattern is longer than the string".



Refer to the sample output for the exact text and format.

Code constraints :
The strings are case-sensitive.

Sample test cases :
Input 1 :
abcdabcdeabcdabcdeabcdabcde
abcd
Output 1 :
Pattern found at index 0
Pattern found at index 4
Pattern found at index 9
Pattern found at index 13
Pattern found at index 18
Pattern found at index 22
Input 2 :
abcdefghij
abcdefghijkl
Output 2 :
Pattern is longer than the string
Input 3 :
Harry Potter
harry
Output 3 :
Pattern not found
