#include <iostream>
#include <cmath>

using namespace std;

int main(){

int size, count=0;
float num, sum=0, var=0, aver, sdev, varia;

cout << endl;
cout << "How many numbers are you going to give me? " << endl;
cin >>size;
cout << endl;
float array[size];

for(int i=0; i<size; i++){
    cout<< "Give me the number to put on the list "<< i+1 << ":" << endl;
    cin>>num;
    array[i] = num;
    sum=sum+num;
}

	cout << endl;

aver = sum/size;

for (int i=0; i<size; i++){
  count = count +1;
  cout << "The numbers you gave me are " << array[i] << endl;
}

cout << endl;
cout << "The sum of your numbers is: " << sum << endl;
cout << "The average of your numbers is: "<< aver << endl;

for(int i=(size-1); i>=0; --i){
  var = ((array[i]-aver)*(array[i]-aver)+var);
}
varia=var/size;
sdev= sqrt(varia);

cout<< "The standard deviation of your numbers is: "<< sdev << endl;


return 0;
}