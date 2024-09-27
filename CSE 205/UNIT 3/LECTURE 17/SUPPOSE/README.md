Suppose you are working on a text processing system that analyzes the frequency of characters in a given string. 



As part of the system, you need to identify the index of the first unique character in the string using a queue implemented using an array. 



The system follows these requirements:

Initialize Queue: The system initializes a custom queue, implemented using an array, to an empty state.
Enqueue Characters: The system enqueues the characters from the input string into the queue.
Count Character Occurrences: While enqueuing, the system keeps track of the number of occurrences of each character.
Find First Unique Character: After enqueuing all characters, the system dequeues characters from the queue and checks their occurrence count. It identifies the index of the first unique character.
Return Result: The system returns the index of the first unique character, or -1 if no unique character is found.


Company Tags: Capgemini

Input format :
The input consists of a single line containing a string of lowercase alphabets.

Output format :
The output displays the index of the first unique character in the string (index starts from 0).

If no unique character is found, the output is -1.



Refer to the sample output for the exact text and format.

Code constraints :
The maximum size of the queue is 100.

Sample test cases :
Input 1 :
aabbcdeeff
Output 1 :
4
Input 2 :
aabb
Output 2 :
-1
