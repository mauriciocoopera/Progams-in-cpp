#include <iostream>
using namespace std;

int main (){
	int i,j,rows;
	
	cout << endl;
	cout << "Enter the number of rows in your awesome triangle: " << endl;
	cin >> rows;
	cout << endl;

	for(i=1; i<=rows; ++i){

		for(j=1; j<=i; ++j)
		{ 
			cout << "T ";
		}
		cout << endl;
	}

	for(i=rows-1; i>=1; --i){

		for(j=1; j<=i; ++j)
		{ 
			cout << "T ";
		}
		cout << endl;
	} 

return 0;

}
