#include <iostream>
using namespace std;

int factorial(int number)
{
	int fact = number;
	if (number == 1)
		return 1;
	
	else
		return fact * factorial(number - 1);
}

int main()
{
	int number;
	string answer;
		
	cout << "Enter a number: " << endl;
	cin >> number;
	cout<<"The factorial of number "<<number<<" is: "<<factorial(number)<<endl;
		cout<<"Do you want to do this again ? (y/n)" << endl;
		cin >> answer;
		if (answer == "y"){
			 factorial (number);
		}
			

		if (answer == "n")
			cout << "Thank you. Come again ! " << endl;

	cout << endl;

	return 0;
}