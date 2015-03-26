#include <iostream>
using namespace std;

int factorial (int x);

int main () 
{

	int n;
	string answer;
		cout << endl;
		cout<<"Enter number: " << endl;
		cin>>n;

		int fact;

		fact = factorial(n);

		cout<<"The factorial of number "<<n<<" is: "<<fact<<endl;
		cout<<"Do you want to do this again ? (y/n)" << endl;
		cin >> answer;
		if (answer == "y"){
			 factorial (n);
		}
			

		if (answer == "n")
			cout << "Thank you. Come again ! " << endl;

		return 0;
}

