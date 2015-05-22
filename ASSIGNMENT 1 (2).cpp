//
//NAME: OGBONAYA KINGSLEY ALEX

// DEPT: STATISTICS
//REG: PDS/2013/1435

//Assignment2.cpp
//Define an integer with an odd or even display message

#include<iostream>
using namespace std;

int main()
{
int num1;
int num2;
cout << "Enter two (a & b) integer= ";
cin >>num1 >> num2;

if ( num1%num2==0 )
cout<< num1 << " = a MULTIPLE of " << num2 <<endl ;
else
cout<< num1<< " = not a MULTIPLE of " << num2<< endl;
return 0;
}
