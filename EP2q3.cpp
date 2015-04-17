//Mauricio de Jesús Cooper Barrera
//A01630042
#include <iostream>
using namespace std;

int fibonacci (int n){
	if (1 == n || 2==n){
		return n;
	}
	
	else {
	return fibonacci(n-1) + fibonacci(n-2);
	
	}
}

int main (){
	int n;
	cout << "Enter the number you want to Fibonacci " << endl;
	cin >> n;
	cout << endl;
	for(int i=1; i<=n; i++)
		{
		cout << fibonacci (i) << endl;
		}
	
return 0;	
}
