//Mauricio de Jesús Cooper Barrera
//A01630042
#include <iostream>
#include <cmath>
using namespace std;

long superpower (long val, long pow=0) {
	if (pow <= 0)
		return 1;
	return val*superpower(val, pow-1);

}

int main (){
	long pow, value;
	
	cout << "Enter the number you want to superpower " << endl;
	cin >> value;
	cout << "Enter the power " << endl;
	cin >> pow;
	cout << endl;
	cout << "The result is: " <<superpower(value,pow) << endl;


 return 0;
}
