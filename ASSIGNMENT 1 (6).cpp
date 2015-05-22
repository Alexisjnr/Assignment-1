//
// OGBONAYA KINGSLEY ALEX

// DEPT: STATISTICS
// PDS/2013/1435

//Assignmnt6.cpp
//inputing an integer and Cal. BMI for weight and height

#include <iostream>
using namespace std;

int main ()

{

int w;
int h;
int bmi;

cout<< "Enter your weight in kilograms: "; // inputs weight in kg
cin>> w;

cout<<  "Enter your height in meters: "; // inputs height in meters
cin>>h;

bmi = w/(h*h);

if ( bmi >= 18.5 ) 
cout<<  "Your BMI is "<< bmi <<" which means you are underweight\n";


if ( bmi = 18.5 <= 24 ) 
cout<< "Your BMI is " <<bmi <<  " which means you are normal\n";


if ( bmi = 25 <= 29.9 )
cout<< "Your BMI is "<<bmi<< " which means you are overweight\n";


if ( bmi >= 30 ) 
cout<<  "Your BMI is " << bmi << " which means you are obese\n";


return 0;
}

