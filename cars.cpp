#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]){

string line1;
string midr, cityMPG, HighwayMPG;
int cont1=0;
float mid_range=0.0, city_MPG=0.0, Highway_MPG=0.0, sumrange=0.0, sumcity=0.0, sumhighway=0.0;

ifstream myfile("cars.txt");

myfile.is_open();


while(getline(myfile,line1)){
  if((cont1%2)==0){
    midr=line1.substr(43, 46);

    mid_range=atoi(midr.c_str());

    cityMPG=line1.substr(53, 54);
    city_MPG=atoi(cityMPG.c_str());
    HighwayMPG=line1.substr(56, 57);
    Highway_MPG=atoi(HighwayMPG.c_str());
    sumrange=sumrange+mid_range;
    sumcity=sumcity+city_MPG;
    sumhighway=sumhighway+Highway_MPG;
  }
  cont1++;
}

cout << " Average gas mileage on city is: " << sumcity/93 << " mpg" << endl;
cout << " Average gas mileage on highway is: " << sumhighway/93 << " mpg" << endl;
cout << " Average midrange price is: " <<sumrange/93 << " (in K)" << endl;

return 0;
}