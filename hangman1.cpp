/*
	Name: HANGMAN GAME
	Author: Noor Ul Hassan
	Date: 14 & 15-02-23 
	Description: HANGMAN GAME WITH GUI
*/

#include "hangman.h"

int main()
{
	system("title HANGMAN");	//Setting title
	system("mode 80,30");		//Setting screen mode
	system("color 09");			//Setting color
	printBox(0, 0, 80, 30);		//Printing box border
	loading();					//Loading game
	hangmanGame();				//Displaying menu
	return 0;
}