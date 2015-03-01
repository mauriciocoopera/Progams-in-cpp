//Mauricio Cooper A01630042
#include <iostream>
using namespace std;
int x,y,s,r,p,d,l;
int main () {
	cout << "Dame los dos números para jugar\n";
	cout << "Introduzca el primer número\n";
	cin >> x;
	cout << "Introduzca el segundo número\n";
	cin >> y;
	s=x+y ;
	cout << "La suma de los dos números es: " << s << endl;
	r=x-y ;
	cout << "La diferencia de los dos números es: "  << r << endl;
	p=x*y ;
	cout << "El producto de los dos números es: "  << p << endl; 
	d=x/y ;
	cout << "La división de los dos números es: "  << d << endl;
	l=x%y ;
	cout << "El residuo de la división de los dos números es: "  << l << endl;
	return 0;

}