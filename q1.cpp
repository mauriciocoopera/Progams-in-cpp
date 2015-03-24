#include <iostream>
#include <cmath>
using namespace std;

int Cooper(int a, int b) {
	
	int x=a,y=b,rem;
	do{
		rem=remainder (x,y);
		if(rem<0)
		{rem=rem*-1;}
		x=y;
		y=rem;
	}	
	while(rem!=0);

	return x;
}

int gcd(int a, int b){
	
	if (a==b){
	return a;
	
	}
	else {
	if (a > b){
		return gcd (a-b,b);

	}
	else {
	return gcd(a,b-a);

	}

	}


}

int main () {
	
	float x,y;
	cout << "I will give you the Greatest Common Divisor " << endl;
	cout << "Enter the largest value " << endl;
	cin>>x;
	cout << "Enter the smaller value " << endl;
	cin>>y;
	cout << "The Greatest Common Divisor is " << Cooper(x,y) << endl;

	return 0;

}