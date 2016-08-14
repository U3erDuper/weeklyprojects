#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userName;
	float num1 = 2;
	float num2 = 2;
	short proof1;
	short proof2;
	char op1 = '+';
	bool isValid = false;
	float result;
	bool isPrime = true;

	cout << endl << "Welcome to the Number Modifier. Please enter your name below to begin, or type exit to quit.." << endl << endl;

	cin >> userName;

	if (userName == "exit") {
		system("EXIT");
	}
	else {
		int numAdd = 0;
		int numAdd2 = 0;
		for (int i = 0; i < userName.length(); i++) {
			numAdd += userName[i] - 96;
		}
		while (numAdd > 9) {
		numAdd2 = numAdd % 10;
		numAdd = numAdd / 10;
		numAdd = numAdd + numAdd2;
		}
		
		cout << endl << "Why hello there " << userName << ", your UserName is " << userName.length() << " characters long :) \nYour personal name number is " << numAdd << endl << endl; 
		cout << "please read the Number Modifier instructions : " << endl << endl;
		cout << "This Number Modifier allows you to perform basic Addition, Subtraction, Multiplication \nand Division of two numbers within the range -32768 to 32767." << endl << endl;
		cout << "To perform an operation, follow the prompts below to enter the First number, \nSecond number, and lastly the Modifier character (+, -, *, or /) " << endl;
		cout << "An isPrime loop will run on the numbers you have entered, to determine if the \nnumbers entered are Prime numbers or not. Please try to break the program :)" << endl << endl;

		while (isValid == false) {

			cout << "Please enter the first number: ";
			cin >> num1;

			if (cin.fail()) {
				cout << "Soz, must be a valid number.." << endl << endl;
				cin.clear(); //Resets the fail flag and must be before cin.ignor()
				cin.ignore(100000000, '\n'); //This flushes the cin buffer. The number represents the number of characters that it flushes. The \n is a delimiter to keep the remaining characters.
				
			}

			else if (num1 < -32768 || num1 > 32767) {
				cout << userName << ", the number entered was outside of the specified range.." << endl << endl;
				
			}

			else {
				isValid = true;
				proof1 = num1;
			}
		}

		isValid = false; //Resets isvalid boolean in order for next while loop to run

		while (isValid == false) {

			cout << endl << "Please enter the second number: ";
			cin >> num2;

			if (cin.fail()) {
				cout << "Good Try " << userName << ", but it has to be a valid number.." << endl << endl;
				cin.clear(); //Resets the fail flag and must be before cin.ignor()
				cin.ignore(100000000, '\n'); //This flushes the cin buffer. The number represents the number of characters that it flushes. The \n is a delimiter to keep the remaining characters.
				
			}

			else if (num2 < -32768 || num2 > 32767) {
				cout << userName << " the number entered was outside of the specified range.." << endl << endl;

			}

			else {
					isValid = true;
					proof2 = num2;
			}
		}
		isValid = false; //Resets isvalid boolean in order for next while loop to run

		while (isValid == false) {

			cout << endl << "Please enter your modifier: ";
			cin >> op1;

			if (num2 == 0 && op1 == '/') {

				cout << "Soz " << userName << ", you can't divide by 0.. Please try again :)" << endl;
				system("PAUSE");
			}

			else if (op1 == '+') {
				result = num1 + num2;
				isValid = true;
			}
			else if (op1 == '-') {
				result = num1 - num2;
				isValid = true;
			}
			else if (op1 == '*') {
				result = num1 * num2;
				isValid = true;
			}
			else if (op1 == '/') {
				result = num1 / num2;
				isValid = true;
			}

			else if (op1 != '+' && op1 != '-' && op1 != '*' && op1 != '/') {
				cout << "Your modifier is not allowed" << endl;
				cout << "Please try again " << userName << endl;
			}

		}

		cout << endl << "The result of the operation is " << result << endl << endl;
		//system("PAUSE");

					//system("EXIT");
		

		/*if (true)
		{
			//things happen
		}

		if (!true)
		{
			//things don't happen
		}*/
		}

		//isPrime Loop Below

		for (int i = 2; i < proof1 - 1; i++) {
			if (proof1 % i == 0) {
				isPrime = false;
				break;
			}
		}
		
		if (isPrime && proof1 > 0) {
			cout << endl << "IsPrime has discovered that " << proof1 << " is a Prime number." << endl << endl;
			
		}
		else {
			cout << endl << "IsPrime has discovered that " << proof1 << " is not a Prime number." << endl << endl;
			
		}
		isPrime = true;

		for (int i = 2; i < proof2 - 1; i++) {
			if (proof2 % i == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime && proof2 > 0) {
			cout << endl << "IsPrime has discovered that " << proof2 << " is a Prime number." << endl << endl;
			system("PAUSE");
		}
		else {
			cout << endl << "IsPrime has discovered that " << proof2 << " is not a Prime number." << endl << endl;
			system("PAUSE");
		}
		return 0;
}