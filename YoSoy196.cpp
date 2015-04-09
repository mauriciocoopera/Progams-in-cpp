#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void google (string s) {
  if (equal(s.begin(), s.begin () + s.size()/2, s.rbegin() ) ){
    cout << "Is a palindrome";
  }
  else{
    cout << "Is not a palindrome";
  }
}

int palindromo() {
    string cadena = string s;
    string aux_cadena = "";

    for (int i = cadena.size(); i >=0 ; i--)
         aux_cadena += cadena[i];

    cout<<"El texto normal es: "<<cadena<<endl;
    cout<<"El texto invertido es: "<<aux_cadena<<endl;
    return 0;
}

int Lychrel (string r){
  string cadena;
  string aux_cadena;
  string a = cadena;
  string b = aux_cadena;
  r = a + b;
  if (equal(r.begin(), r.begin () + r.size()/2, r.rbegin() ) ){
    cout << "Es un Lychrel" << endl;
  }
  else {
    cout << "No es un Lychrel" << endl;
  }
  return 0;
}

int main (){
  string s;
  string r;
  cout << "Introduce una cadena" << endl;
  cin >> s;
  google (s);
  Lychrel (r);
  return 0;
}