#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	cout << "Hi" << endl;

	int mainNumber, divisor;
	float result;
	int remainder;

	cout << "what number would you like to divide?: ";
	cin >> mainNumber;
	cout << "what would you like to divide it by?: ";
	cin >> divisor;

	result = mainNumber / divisor;
	remainder = mainNumber % divisor;


	cout << "the result of the division is " << mainNumber / divisor << " with a remainder of " << remainder << endl;

	for (int x = 1; x < 10; x++) {
		cout << x << endl;
	}

	int myAge = 0;
	int num2 = 7, num3 = 13;
	char letter1 = 'a';
	int bob = 'a';

	const int taxRate = 15;

	cout << myAge << num2 << num3 << letter1 << bob << endl;
	cout << num2++ << endl;
	cout << num2 << endl;

	{
		int num5 = 12;
		cout << num5 << endl;
		num2++;
	}

	//int magicNum = 0, magicNum2 = 0;

	//cout << "please neter 2 magic numbers: ";
	//cin >> magicNum >> magicNum2;

	//cout << "you entered the numbers " << magicNum << " and " << magicNum2 << endl;

	ofstream outFile;
	outFile.open("example.txt");
	outFile << "Hank" << endl;
	outFile.close();

	//ofstream outFile;
	outFile.open("example.txt", ios::app);
	outFile << "Bob" << endl;
	outFile.close();

	string name1, name2;

	ifstream inFile;
	inFile.open("example.txt");
	inFile >> name1 >> name2;

	cout << name1 << " " << name2 << endl;

	string input, cCName;
	float a, b, c, d, aud;

	ifstream exRate;
	exRate.open("currency.txt", ios::app);
	exRate >> a >> b >> c >> d;

	cout << "Welcome to currency converter." << endl << "First up, please enter your name: ";

	cin >> cCName;

	cout << endl << "Alright " << cCName << " The current exchange rates are : " << endl << endl;
	cout << "a)US Dollar - " << a << endl << "b)British Pound - " << b << endl << "c)Euro - " << c << endl << "d)Japanese Yen - " << d << endl << endl;
	cout << "Please enter an amount in AUD, followed by a space and the letter corresponding to the desired currency" << endl;

	cin >> aud >> input;

	if (input == "a") {
		cout << "Okay " << cCName << " the amount in US Dollars is: $" << (aud * a) << endl;
	}
	else if (input == "b") {
		cout << "Okay " << cCName << " the amount in British Pounds is: $" << (aud * b) << endl;
	}
	else if (input == "c") {
		cout << "Okay " << cCName << " the amount in Euros is: $" << (aud * c) << endl;
	}
	else if (input == "d") {
		cout << "Okay " << cCName << " the amount in Japanese Yen is: $" << (aud * d) << endl;
	}
	else {
		cout << "Sorry " << cCName << " you entered an invalid param :( " << endl << endl;

	}
	system("PAUSE");

	return 0;
}

