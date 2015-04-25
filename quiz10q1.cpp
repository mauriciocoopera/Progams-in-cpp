#include <iostream>
using namespace std;

float findThrees (int array[]){

float div, sum=0;	
	for(int x=1; x<11; x++){
	div=array[x]%3;
	if(div==0)	
	sum= sum + array[x];
	}

return sum;
}

int main (){

int n;
cout << "Enter how many numbers you want to compare " << endl;
cin >> n;
int dim, numbers[n];
for(int i=1; i<n+1; i++){
cout<<"Enter the "<<i<<"° number"<<endl;
cin>> dim;
numbers[i]=dim;
}

cout<<"The sum of the numbers divisible by three is: "<<findThrees(numbers)<<endl;

return 0;
}