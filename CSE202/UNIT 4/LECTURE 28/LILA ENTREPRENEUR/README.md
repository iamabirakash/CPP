Lila, an ambitious entrepreneur, is organizing an exhibition featuring various types of stalls. She wants to manage and keep track of these stalls efficiently. She has different categories of stalls, such as Silver Stalls, Gold Stalls, and Platinum Stalls, each offering different facilities and services. Lila decided to create a program to handle the data and functionalities of these stalls using multilevel inheritance.



Lila's main requirements for the program are as follows:



Implement three classes: SilverStall, GoldStall, and PlatinumStall, representing the different types of stalls available.
Each stall class should have common attributes like name, detail, owner, and cost.
The GoldStall class should additionally have an attribute called tvSet, representing the number of television sets available in that stall. The total cost is the base cost plus 100 for each TV set.
The PlatinumStall class should further have an attribute called projector, indicating the number of projectors available in that stall.  The total cost is the base cost plus 100 for each TV set plus 500 for each projector.
The program should create objects of the corresponding stall type and calculate the total cost of each stall.
Input format :
The first line contains an integer n, representing the type of stall:

1 for SilverStall
2 for GoldStall
3 for PlatinumStall
If n is 1, the next line contains four space-separated values:

name (string)
detail (string)
owner (string)
cost (integer)
If n is 2, the next line contains five space-separated values:

name (string)
detail (string)
owner (string)
cost (integer)
tvSet (integer, number of TV sets)
If n is 3, the next line contains six space-separated values:

name (string)
detail (string)
owner (string)
cost (integer)
tvSet (integer, number of TV sets)
projector (integer, number of projectors)
Output format :
The output should be a single integer representing the total cost of the chosen stall type.

If the input is invalid (n > 3), output "Invalid Input".



Refer to the sample output for the formatting specifications.

Code constraints :
All string inputs have lengths <= 100.

Cost, tvSet, and projector values are non-negative integers.

Sample test cases :
Input 1 :
1
FoodStall
Food
Ankit
1000
Output 1 :
1000
Input 2 :
2
FoodStall
Food
Ankit
1000
5
Output 2 :
1500
Input 3 :
3
FoodStall
Food
Ankit
1000
5
2
Output 3 :
2500
Input 4 :
4
Output 4 :
Invalid Input
Code Size : 1024 kb
