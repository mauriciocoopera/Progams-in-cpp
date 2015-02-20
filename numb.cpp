#include <iostream>
using namespace std;
int thesum(int x, int y){
	int answer = x+y;
	return answer;
}
int thediff (int x, int y){
	int answer = x-y;
	return answer;
}
int themult (int x, int y){
	int answer = x*y;
	return answer;
}
int thediv (int x, int y){
	int answer = x/y;
	return answer;
}
int theres (int x, int y){
	int answer = x%y;
	return answer;
}
int main () {
int num1,num2,sum,rest,mult,div,res;
	cout<<"Give two numbers to do some math " << endl;
	cout<<"Enter the first number " << endl;
	cin>>num1;
	cout<<"Enter the second number " << endl;
	cin>>num2;
	
	sum = thesum (num1,num2);
	rest = thediff (num1,num2);
	mult = themult (num1,num2);
	div = thediv (num1,num2);
	res = theres (num1,num2);
	
	cout<<"The sum of the numbers is " << sum << endl;
	cout<<"The difference of the numbers is " << rest << endl;
	cout<<"The multiplication of the numbers is " << mult << endl;
	cout<<"The division of the numbers is " << div << endl;
	cout<<"The left of the division is " << res << endl;
	
return 0;
}