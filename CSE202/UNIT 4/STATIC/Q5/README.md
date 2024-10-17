Diego is developing a program to evaluate the efficiency of hybrid vehicles based on fuel consumption and horsepower. The program will establish a class hierarchy to represent various vehicle types and compute their efficiency ratios.



Vehicle: A base class with attributes for fuel consumption (liters per 100 km) and horsepower, featuring constructors to initialize these values and a method to calculate the efficiency ratio defined as horsepower/fuel consumption.



Electric: A subclass representing electric vehicles, inheriting attributes and methods from Vehicle.



Gasoline: A subclass for gasoline vehicles, also inheriting from Vehicle.



Hybrid: A subclass inheriting from both Electric and Gasoline, using a Virtual Base Class and Vehicle attributes for initialization. Implement the labelEfficiency() method in the Hybrid class to categorize the efficiency ratio as follows:



If the efficiency ratio is less than 5.0, return "Low Efficiency".
If the efficiency ratio is between 5.0 and 10.0 (inclusive), return "Moderate Efficiency".
If the efficiency ratio is greater than 10.0, return "High Efficiency".
Input format :
The first line of input consists of an integer representing the fuel consumption of the hybrid vehicle (in liters per 100 km).

The second line of input consists of an integer representing the horsepower of the hybrid vehicle.

Output format :
The first line of output displays a double with two decimal places, representing the efficiency ratio of the hybrid vehicle.

The second line of output displays a string describing the efficiency based on the following conditions:

If the ratio < 5.0, return "Low Efficiency".
If 5.0 <= ratio <= 10.0, return "Moderate Efficiency".
If the ratio > 10.0, return "High Efficiency".


Refer to the sample output for the formatting specifications.

Code constraints :
0 ≤ fuelConsumption ≤ 100

0 ≤ horsepower ≤ 1000

Sample test cases :
Input 1 :
20
20
Output 1 :
1.00
Low Efficiency
Input 2 :
8
50
Output 2 :
6.25
Moderate Efficiency
Input 3 :
9
120
Output 3 :
13.33
High Efficiency
