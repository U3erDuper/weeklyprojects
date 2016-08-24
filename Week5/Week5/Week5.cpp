#include <iostream>
#include <string>

using namespace std;

int addition(int num1, int num2)
{
	return num1 + num2;
}

int subtraction(int num1, int num2)
{
	return num1 - num2;
}

int multiplication(int num1, int num2)
{
	return num1 * num2;
}

float division(float num1, float num2)
{
	return num1 / num2;
}

int main()
{
	float num1, num2, result;
	char op1;
	bool isValid = false;

	cout << endl << "Welcome to Basic Calculator 3000.\nCalculator 3000 allows you to perform basic Addition, Subtraction, Multiplication \nand Division of two numbers.\n\nTo perform an operation, follow the prompts below to enter the First number, \nSecond number, and lastly the Modifier character (+, -, *, or /) " << endl;
	while (true)
	{
		while (!isValid)
		{
			cout << "Please enter the first number: ";

			cin >> num1;

			if (cin.fail())						//expects an int, else will flag as false
			{
				cout << "Soz, must be a valid number..\n\n";
				cin.clear();					//Resets the fail flag and must be before cin.ignor()
				cin.ignore();	//This flushes the cin buffer. The number represents the number of characters that it flushes. The \n is a delimiter to keep the remaining characters.
			}

			else 
			{
				isValid = true;
			}
		}

		isValid = false; //Resets isvalid boolean in order for next while loop to run

		while (isValid == false) 
		{

			cout << endl << "Please enter the second number: ";
			cin >> num2;

			if (cin.fail()) 
			{
				cout << "Good try, but it has to be a valid number.." << endl << endl;
				cin.clear(); //Resets the fail flag and must be before cin.ignor()
				cin.ignore(); //This flushes the cin buffer. The number represents the number of characters that it flushes. The \n is a delimiter to keep the remaining characters.

			}

			else 
			{
				isValid = true;
			}
		}
		isValid = false; //Resets isvalid boolean in order for next while loop to run

		while (isValid == false) 
		{

			cout << endl << "Please enter your modifier: ";
			cin >> op1;

			if (num2 == 0 && op1 == '/') {

				cout << "Soz, you can't divide by 0.. Please try again :)" << endl;
				system("PAUSE");
			}

			else if (op1 == '+') 
			{
				result = addition(num1, num2);
				isValid = true;
			}
			else if (op1 == '-') 
			{
				result = subtraction(num1, num2);
				isValid = true;
			}
			else if (op1 == '*') 
			{
				result = multiplication(num1, num2);
				isValid = true;
			}
			else if (op1 == '/') 
			{
				result = division(num1, num2);
				isValid = true;
			}

			else 
			{
				cout << "Your modifier is not allowed" << endl;
				cout << "Please try again " << endl;
			}

		}

		cout << endl << "The result of the operation is " << result << endl << endl;

		isValid = false;

		cout << "Type [Q] to Quit or type any other key to perform another operation ";

		char choice;
		
		cin >> choice;

		if (choice == 'q')
		{
			return 0;
		}
	}

}