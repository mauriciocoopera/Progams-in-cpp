#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	
int random, x, cont=1;
srand  (time(NULL));
random = 1 + rand()%100;

cout<<"Guess a number between 1 and 100."<<endl;
cout<<"Enter a number: "<<endl;
cin>>x;

while (x!=random)
{
	cont++;
	if (x<random)
	{
		cout<<"Your number is too low. Try again : "<<endl;
		cin>>x;
	}

	else
	{
		cout<<"Your number is to high. Try again : "<<endl;
		cin>>x;
	}

} 

cout<<"You rock. The number is : "<<x<<". Guess tooks "<<cont<<" tries."<<endl;
return 0; 
}