//Mauricio de Jesús Cooper Barrera
//A01630042
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void palindrome (){
	string x,y;
	cout << "Enter the string " << endl;
	cin >> x;
	y = string(x.rbegin(), x.rend());
	cout << "The string backwards is: " << y << endl;
	
	if (x == y){
	cout << "It's a palindrome !" << endl;
	}

	else {
	cout << "Not a palindrome :( " << endl;
	}
}

int main (){
	
	palindrome ();
	return 0;
}