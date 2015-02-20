#include <iostream>
using namespace std;
int main (){
  int x, y, z, test, res, sum;

  do{
    cout << "Pick two numbers " << endl;
    cout << "I'll give you the sum from number one to number two " << endl;
    cout << "Enter the smaller number " << endl;
    cin >> x;
    cout << "Enter the bigger number " << endl;
    cin >> y;

      if (x<y){
        test=0;
      }

        else {
          cout << endl <<"You write the numbers in an incorrect way. Try again. " << endl;
          test=10;
        }
} while (test==10);
  if(test==0)
    z=(y-x)+1;
    sum=0;
    for (int i=0; i<z; i++){
    res=(x+i);
    sum=sum+res;
    }
        cout << "The sum from " << x << " to " << y <<" is equal to " << sum;
return 0;
}