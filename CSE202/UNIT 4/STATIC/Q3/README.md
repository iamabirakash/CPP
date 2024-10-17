Arjun is passionate about creating unique cylindrical art pieces. Develop a program that takes input for the radius and height of his sculptures and calculates the volume.



Base class Circle: Contains a private attribute called radius, representing the radius of a circle.

Privately inherited derived class Cylinder: It is inherited from the Circle class and has a private attribute named height, representing the height of the cylinder.

volume() method inside the Cylinder class: To calculate the volume of the cylinder.



Formula: Volume = 3.14 * radius * radius * height

Input format :
The input consists of two space-separated double values, which represent the radius and height of the cylinder.

Output format :
The output prints a double value, representing the volume of the cylinder, rounded to two decimal places.



Refer to the sample outputs for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1.0 ≤ radius, height ≤ 50.0

Sample test cases :
Input 1 :
5.1 3.6
Output 1 :
294.02
Input 2 :
3.4 6.2
Output 2 :
225.05
Note :
