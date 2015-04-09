#include <iostream>
#include <iomanip>

using namespace std;

double calculate_e(int n)
{
  
  double res = 2.0;
  double fact = 1;

  for (int i=2; i<n; i++)
  {
    fact *= i;
    res += 1/fact;
  }

  return res;
}

int main()
{
  int precision;
  cout << endl;
  cout << "Estimating the constant e " << endl;
  cout << "Enter the number of significant figures you want " << endl;
  cin >> precision;
  cout << "The value of e is: " << setprecision(precision) << calculate_e(50) << endl;
  cout << "Muchas gracias por el código Cooper, eres el mejor :D " << endl;
    
  return 0;
}
