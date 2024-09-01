Imagine you are developing a software application that tracks and manages the configuration settings for multiple user profiles. As part of this application, you need to create a class named "Demo" to handle the retrieval and printing of specific configuration values. 



The "Demo" class should have the following specifications:

It includes two private static integer variables, X and Y, which represent the configuration values.
The class provides a static member function called "get()" that allows other parts of the application to retrieve the values of X and Y.
The class also provides a static member function called "fun()" that prints the values of X and Y to the console.
The default values for X and Y are set to 10 and 20, respectively.


Your task is to implement the "Demo" class based on the given specifications. In the main method of your application, create an object of the "Demo" class and call the "get()" and "fun()" methods to retrieve and print the configuration values, respectively.



Company Tags: Capgemini 

Input format :
The first line of input consists of the value of X.

The second line of input consists of the value of Y.

Output format :
The first two lines of output print the default values of X and Y.

The last two lines of output print the given input values of X and Y



Refer to the sample outputs for the formatting specifications.

Code constraints :
The initial default values of X and Y are set to 10 and 20, respectively.

1 ≤ X, Y ≤ 105

Sample test cases :
Input 1 :
250
350
Output 1 :
Value of X: 10
Value of Y: 20
Value of X: 250
Value of Y: 350

Input 2 :
240
840
Output 2 :
Value of X: 10
Value of Y: 20
Value of X: 240
Value of Y: 840
