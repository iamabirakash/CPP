Sophia is an aspiring entrepreneur who has just opened her online store. To help her customers understand the pricing of her products better, she decided to implement a program that calculates the total price of items based on their types.



She defines an abstract class Product with a pure virtual function calculateTotalPrice() that must be implemented by derived classes. The Electronics class calculates the total price after applying a discount, while the Apparel class adds tax to the base price. Sophia wants to input the price and discount for electronics, as well as the price and tax for apparel. 



For Electronics (calculating the total price after discount):

Total Price = Price - (Price × (Discount / 100))



For Apparel (calculating the total price after tax):

Total Price = Price + (Price × (Tax / 100))

Input format :
The first line contains space-separated two double values representing the price and the discount on the electronics.

The second line contains space-separated two double values, representing the price and tax on apparel (a double).

Output format :
The first line displays a double value representing the final price of the electronics after the discount, rounded off by two decimal points.

The second line displays a double value representing the final price of the apparel after tax, rounded off by two decimal points.



Refer to the sample output for the formatting specifications.

Code constraints :
0.0 ≤ price ≤ 107.0

0.0 ≤discount, tax ≤ 100.0

Sample test cases :
Input 1 :
500.00 15.00
250.00 8.5
Output 1 :
425.00
271.25
Input 2 :
2000.00 15.5
300.00 12.00
Output 2 :
1690.00
336.00
