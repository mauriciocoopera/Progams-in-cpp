#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;

void readNumbersFromFile(string filename){

string line1;
float sum=0.0, value=0.0, sdev=0.0;
int counter=0;

ifstream myfile(filename.c_str());

myfile.is_open();

while(getline(myfile,line1)){
value=atoi(line1.c_str());
sum=sum+value;
counter++;
sdev=sqrt((pow(value-(sum/counter),2)/value));
}

cout << "The total of the values is: " << sum << endl;

cout << "The number of values is: " << counter << endl;

cout << "The average of the values is: " << sum/counter << endl;

cout << "The standard deviation is: " << sdev << endl;
}


int main(){


readNumbersFromFile("numbers.txt");

return 0;

}