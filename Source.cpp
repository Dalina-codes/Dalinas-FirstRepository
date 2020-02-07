//----------------------------------------------------------
//  Name: Dalina Tu
//  E-mail Address: dtt5131@psu.edu
//  Class: CMPSC 121 Section 
//  Homework 6
//  Due Date: 11/4
//  Brief Project Description:
/* (50 points)
The program helps you learn math: should ask the user to pick a type of arithmetic problem to study.
Option 1 means addition problems, 2 means subtraction problems, 
3 means multiplication problems, and 4 means division problems.

If user picks 5, program should randomly pick one of the options 1 - 4
and entering 6 should end the program.
*/
//----------------------------------------------------------
# include <iostream>
# include <cstdlib>
# include <cmath>
# include <ctime>
using namespace std;

int menu();
double questions(int, double, double, double);
double numbers();
void anscorrect();
void ansincorrect();

int main()
{
	int option, useranswer;
	do {
		// whatever the user chooses
		 option = menu(); // call the choice function, this will return the value for option, whatever the user chose

	
		if (option != 6) // option 6 will result in the program ending
		{	
			double num1, num2;
			num1 = numbers();
			num2 = numbers();
			questions(option, num1, num2, useranswer);
			
		
		}
		
	}
	while (option != 6); 
	{
	cout << "Thank you for using Math Tutor. Goodbye.\n\n";
	return 0;
	}
}

int menu()
{
	int opt;
	cout << "        Math Tutor Menu\n";
	cout << "----------------------------------------------\n";
	cout << "Enter 1 for addition problem\n";
	cout << "Enter 2 for subtraction problem\n";
	cout << "Enter 3 for multiplication problem\n";
	cout << "Enter 4 for division problem\n";
	cout << "Enter 5 for a combination of 1 through 4\n";
	cout << "Enter 6 to quit this program\n";
	cout << "----------------------------------------------\n";
	cin >> opt;
	while (opt < 1 || opt > 6)
	{
		cout << "Input invalid";
		cin >> opt;

	}
	cout << endl;
	return opt;
}

double numbers()
{	
	cout << "Select a difficulty level (1-4):";
	int diff;
	cin >> diff;

			switch (diff)
			{
			case 1:
			{	const int MIN_VALUE = 1;
				const int MAX_VALUE = 9;

				double num1, num2;

				// Get the system time.
				int seed = static_cast <int> (time(0));

				// Seed the random number generator.
				srand(seed);

				num1 = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
				num2 = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
			}
			case 2:
			{
				const int MIN_VALUE = 10;
				const int MAX_VALUE = 99;

				double num1, num2;

				// Get the system time.
				int seed = static_cast <int> (time(0));

				// Seed the random number generator.
				srand(seed);

				num1 = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
				num2 = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
			}
			case 3:
			{
				const int MIN_VALUE = 100;
				const int MAX_VALUE = 999;

				double num1, num2;

				// Get the system time.
				int seed = static_cast <int> (time(0));

				// Seed the random number generator.
				srand(seed);

				num1 = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
				num2 = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
			}
			case 4:
			{
				const int MIN_VALUE = 1000;
				const int MAX_VALUE = 9999;

				double num1, num2;

				// Get the system time.
				int seed = static_cast <int> (time(0));

				// Seed the random number generator.
				srand(seed);

				num1 = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
				num2 = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
		

			}
			default:
			{cout << "Invalid choice." << endl; }
			}

			return num1;
			return num2;



}

double questions(int option, double num1, double num2, double useranswer)
{
	

			switch (option)
			{
			case 1: // Addition
			{
				double correctanswer = num1 + num2;
				cout << endl << "What is " << num1 << " + " << num2
					<< " ? " << endl << endl;
				cin >> useranswer;

				break;
			}
			case 2: // Subtraction
			{ 
					if (num1 > num2)
					{
						double correctanswer = num1 - num2;
						cout << endl << "What is " << num1 << " - " << num2 << " ? " << endl << endl;
						cin >> useranswer;
					}
					else
					{
						double correctanswer = num2 - num1;

						cout << endl << "What is " << num2 << " - " << num1 << " ? " << endl << endl;
						cin >> useranswer;
					}

				break;
			}

			case 3: // Multiplication
			{
				double correctanswer = num1 * num2;
				
				cout << endl << "What is" << num1 << " * " << num2 << " ? " << endl << endl;
				cin >> useranswer;
			
			break;
			}

			case 4: // Division
			{	
				double correctanswer = num1 / num2;
				
				cout << endl << "What is " << num1 << " / " << num2 << " ? " << endl << endl;
				cin >> useranswer;
				
			break;
			}

			default:
			{
				cout << "Please enter a valid menu choice: ";
				cin >> option;
				main();
			}

			return useranswer;

	} // end of the switch statement

			
}
void anscorrect()
{
	int choice = rand() % 4;
	switch (choice)
	{
	case 0:
	{
		cout << "Good Job";
	break;
	}
	
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;

}

}

void ansincorrect()
{
	int choice = rand() % 4;
	switch (choice)
	{
	case 0:
	{
		cout << "Wrong";
		break; 
	}
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;

	}

}



