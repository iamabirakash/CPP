You are designing a printer queue for a computer lab. The lab has a printer that can only process one print job at a time. Your task is to implement a queue using a linked list to manage print jobs sent to the printer. Each print job is represented by the number of pages it contains. 



Implement the following operations:

Enqueue Print Job: Add a print job to the end of the queue.
Dequeue Print Job: Remove and process the next print job in the queue.
Display Queue: Display the print jobs in the queue.


Your program should handle these operations efficiently to ensure that print jobs are processed in the order they are received.

Input format :
The input consists of an integer option representing the action to be performed:

Option 1: Enqueue a print job. If the option is 1, the next line contains an integer representing the number of pages in the print job to be enqueued.

Option 2: Dequeue and process the next print job.

Option 3: Display the print jobs in the queue.

Option 0: Exit.

Any other integer: Invalid option.

Output format :
For each operation, the program should provide the appropriate output messages:

If option 1 is chosen, display a message indicating that the print job has been enqueued.
If option 2 is chosen and a print job is dequeued, display a message indicating that the print job has been processed.
If option 2 is chosen and the queue is empty, display the message "Queue is empty" indicating that the queue is empty.
If option 3 is chosen, display the current print jobs in the queue, and if the queue is empty, display it as "Queue is empty".
Exit the program and print "Exiting the program" if option 0 is chosen.


If any other option other than 1, 2, 3, or 0 is given, print "Invalid option"



Refer to the sample output for the exact text and format.

Code constraints :
The number of pages in a print job is a positive integer.

Sample test cases :
Input 1 :
1
5
3
7
0
Output 1 :
Print job with 5 pages is enqueued
Print jobs in the queue: 5 pages 
Invalid option
Exiting the program
Input 2 :
1
3
1
2
3
0
Output 2 :
Print job with 3 pages is enqueued
Print job with 2 pages is enqueued
Print jobs in the queue: 3 pages 2 pages 
Exiting the program
Input 3 :
1
10
1
15
1
18
2
3
0
Output 3 :
Print job with 10 pages is enqueued
Print job with 15 pages is enqueued
Print job with 18 pages is enqueued
Processing print job: 10 pages
Print jobs in the queue: 15 pages 18 pages 
Exiting the program
Input 4 :
1
12
2
3
0
Output 4 :
Print job with 12 pages is enqueued
Processing print job: 12 pages
Queue is empty
Exiting the program
Input 5 :
2
0
Output 5 :
Queue is empty
Exiting the program
