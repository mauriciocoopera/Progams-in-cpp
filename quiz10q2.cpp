#include <iostream>
using namespace std;

long double dotProduct (int v1[], int v2[]){

float dot, sum=0;   
    for(int i=1; i<6; i++){
    dot=v1[i]*v2[i];
    sum= sum + dot;
    }
return sum;
}

int main (){

int x;
cout << "Enter how many numbers you want in your vectors " << endl;
cin >> x;

int n, v1[x], v2[x];

for(int i=1; i<x+1; i++){
cout<<"Introduce the "<<i<<"° number of the first vector"<<endl;
cin>> n;
v1[i]=n;
}

for(int i=1; i<x+1; i++){
cout<<"Enter the "<<i<<"° number of the second vector"<<endl;
cin>> n;
v2[i]=n;
}

cout<<"The dot product is: "<<dotProduct(v1, v2)<<endl;

return 0;
}