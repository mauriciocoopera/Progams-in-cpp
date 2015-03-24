#include <iostream>
using namespace std;

double sqrt(double);

int main() {
	double num;
	cout << endl;
	cout << "Enter the number you want to square root by the Babylonian Method: " << endl;
	cin >> num;
	cout << endl;
	double result = sqrt(num);
	cout << endl;
	cout << "The square root is: " << result << endl;

	return 0;
}


double sqrt(double number) {
	double error = 0.00001;
	double s = number;

	while ((s - number/s) > error) {
	s = (s + number/s)/2;

	cout << "The intermediate result is: " << s << "      I´m still guessing " << endl;
	}
	return s;
}