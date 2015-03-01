//Mauricio Cooper A01630042
#include <iostream>
using namespace std;
int n,s,r,a,e,x;
int main () {
	cout << "I'm going to guess your age " << endl;
	cout << "Choose a number from 1 to 10 " << endl;
	cin >>n;
	s=((n*2)+5)*50;
	cout << "Do you already had your birthday party? (1=yes and 2=no) " << endl;
	cin >>r;

	if (r == 1) {
    a=s+1765;
	}

	if (r == 2) {
    a=s+1764;
	}


	cout << "Enter the year of your birth " << endl;
	cin >>e;
	x=a-e;
	cout << "The first number is your chosen number and the next number is your age: " << endl; 
	cout << x << endl;
	return 0;
}