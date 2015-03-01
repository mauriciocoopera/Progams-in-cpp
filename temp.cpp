//Mauricio Cooper A01630042
#include <iostream>
using namespace std;
int C,F;
int main () {
	
	cout << endl;
	cout << "Enter a Fahrenheit Degrees Temperature" << endl;
	cout << endl;
	cin >> F ;
	cout << endl;
	C=5*(F-32)/9;
	cout << "Your temperature in Celsius degrees is: " << C << endl;
	cout << endl;

	if (C >= 100){
		cout << "Water would boil at this temperature. This crap is hot.";
	}

	else if (C <=0) {
		cout << "Water would freeze at this temperature. Cold as your GF.";
	}
	
	else {
		cout << "Water neither freeze nor boil. Fresh as fuck.";
	}
	
	cout << endl;
	return 0;
}