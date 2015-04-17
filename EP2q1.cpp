//Mauricio de Jesús Cooper Barrera
//A01630042
#include <iostream>
using namespace std;

void triangles (int n){
	int rows=n;
	int i,j;

	for (i=1; i<=rows; ++i){
	for (j=1; j<=i ; ++j){
		cout << "T ";
		}
	cout << endl;}

	for (i=rows; i>=1; --i){
	for (j=1; j<=i ; ++j){
		cout << "T ";
	    }
	cout << endl;}

}

int main (){

	int rows;
	cout << "Enter the number of lines in your triangle " << endl;
	cin >> rows;
	triangles (rows);
}