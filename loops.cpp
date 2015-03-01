#include <iostream>
using namespace std;
int main() {

  int x, y, sum = 0, cont;
  cout << "Give me the first number" << endl;
  cin>> x;
  cout << "Give me the second number" << endl;
  cin>> y;
  cont= x;
  do{
  sum = sum + cont;
  cont = cont++ ;
  }
  while(cont<=y);
  cout << "The sum of the range of the numbers is : "<< sum << endl;
return 0;
}