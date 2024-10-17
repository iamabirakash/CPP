Murali is developing a letter game scoring system that assigns scores based on uppercase and lowercase letters. In this game, players enter two letters, and for each uppercase letter, they earn 10 marks, while for each lowercase letter, they lose 5 marks.



His task is to calculate the total score for the given letters entered by the player.



Help him to write a program to calculate the total score. Create a base class Base with the virtual method game(). Define this method in the Derived class Derive and calculate the total score.



Note: The scoring mechanism of the game is based on whether the input characters are uppercase letters (score +10) or not (score -5).

Input format :
The input consists of the two characters a and b, representing the inputs.

Output format :
The output prints a single line containing the score calculated by the game() method of the Derived class.



Refer to the sample output for the formatting specifications.

Code constraints :
a and b can be any ASCII characters.

Sample test cases :
Input 1 :
A F 
Output 1 :
Score : 20
Input 2 :
A b
Output 2 :
Score : 5
Input 3 :
u i
Output 3 :
Score : -10
