
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

double add(double number1, double number2){
    double result = number1+ number2;
    return result;
}

int main()
{

//functions 
double number1;
double number2;

cout<<"Enter in #1:"<< endl;
cin>>number1;
cout<<"Enter in #2: "<< endl;
cin>>number2;
   
   double result = add (number1,number2); 
   cout<< "Your result is: " << result << endl; 
   
   return 0;
  };