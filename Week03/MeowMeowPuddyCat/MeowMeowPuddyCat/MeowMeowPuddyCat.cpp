// MeowMeowPuddyCat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << endl << "Welcome to MeowMeowPuddyCat, the game that trains you to be a superb cat owner!!" << endl << endl;
	cout << "Please enter your name below to begin, or type exit to quit.." << endl << endl;

	string input;
	int cat;
	bool valid = false;

	cin >> input;

	if (input == "exit") {
		cout << "Good day!" << endl << endl;
		system("PAUSE");
		cout << "I said Good day!!!" << endl;
	}

	else {

		while (valid == false) {

			cout << endl << "Hello " << input << " :) Choose your virtual cat from the list below." << endl << endl;

			cout << "1) Sarge - A Tabby African Wild Cat." << endl;
			cout << "Sarge likes to play and explore, but mostly loves relaxing near a fireplace, or meowing relentlessly at 5am." << endl << endl;
			cout << "2) Nina - A Calico Short Hair Domestic Cat." << endl;
			cout << "Nina likes to climb trees and hide in dark places. She can follow you around the house for hours." << endl << endl;
			cout << "3) Moses - A Ginger Bengal Cat." << endl;
			cout << "Moses likes to be affectionate and smooch people. Always full of energy chasing butterflies and going on adventures." << endl << endl;

			cin >> cat;

			if (cat == 1) {

				valid = true;
				cout << endl << "Cat kept you awake and you couldn't deal :(" << endl << endl;

			}

			else if (cat == 2) {

				valid = true;
				cout << endl << "Cat got lost under your bed :(" << endl << endl;

			}

			else if (cat == 3) {

				valid = true;
				cout << endl << "You both lived happily ever after, forever :)" << endl << endl;

			}

			else {

				cout << endl << "You didn't pick a valid cat :(" << endl << endl;

				system("PAUSE");
				system("CLS");
			}

		}

	}



	system("PAUSE");

    return 0;
}

