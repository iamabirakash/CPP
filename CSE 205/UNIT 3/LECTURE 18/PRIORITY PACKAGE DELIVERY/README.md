Suppose you are assigned the task of developing a package delivery system for a logistics company. The system should enable efficient management of packages for delivery, including prioritizing deliveries based on certain criteria.



The program utilizes a priority queue to manage packages for delivery. Each package is represented by its destination and delivery priority. The delivery priority is a value between 1 and 5, with lower values indicating higher priority for delivery (1 has the highest priority, next 2, and so on)



The system offers the following options: Add package, Deliver package, View next package for delivery, and Exit.

Input format :
The input consists of an integer representing the choice from the menu.

Choice 1: Add package

Choice 2: Deliver the package

Choice 3: View the next package for delivery

Choice 4: Exit



For Choice 1, the program expects the following inputs on separate lines:

Package destination (string with spaces allowed)
Delivery priority (integer between 1 and 5, inclusive)


For choice 2, choice 3, and for choice 4, no additional input is required.

Output format :
The program outputs messages based on the user's choices.

When adding a package to the delivery queue, the program outputs: "Package added to the delivery queue."

When delivering a package, the program outputs: "Delivered package to: [Package Destination]"

When delivering a package, if the queue is empty, print "No packages in the delivery queue."

When viewing the next package for delivery, the program outputs: "Next package for delivery: [Package Destination]"

When there are no packages in the delivery queue, the program outputs: "No packages in the delivery queue."

When exiting the application, the program outputs: "Exiting the application."

For invalid choices, the program outputs: "Invalid choice."



Refer to the sample output for the exact text and format.

Code constraints :
The maximum queue size is 100.

Sample test cases :
Input 1 :
1
Paris
3
1
San Francisco
2
2
4
Output 1 :
Package added to the delivery queue.
Package added to the delivery queue.
Delivered package to: San Francisco
Exiting the application.
Input 2 :
1
New York
2
2
4
Output 2 :
Package added to the delivery queue.
Delivered package to: New York
Exiting the application.
Input 3 :
1
London
4
3
4
Output 3 :
Package added to the delivery queue.
Next package for delivery: London
Exiting the application.
Input 4 :
5
4
Output 4 :
Invalid choice.
Exiting the application.
Input 5 :
2
4
Output 5 :
No packages in the delivery queue.
Exiting the applicatio
