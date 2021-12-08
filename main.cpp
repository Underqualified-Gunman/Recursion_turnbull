//created by liam turnbull for dr T at TCC
#include "IVE.h"
#include <iostream>
using namespace std;

int factorialR(int);

int main() 
{
  int intput;
  //cout << "enter the input for a factorial:" << endl;
  cin >> intput;

  //cout << factorialR(6) << endl;
  cout << factorialR(intput) << endl;
  //cout << factorialR(5) << endl;

} 

int factorialR(int i)
{
  // this function should take the starting number and multpily it down for example if the input is 7 then do 7 * 6 * 5 * 4 * 3 * 2 * 1. this would then return the result after all of have instanced

  if(i == 0)// checks to see if i is equal to zero 0 
  {
    return 1;
  }
  else 
  {
    return i * factorialR(i-1);
  }
  /*
     int factorial(int n) 
   { 
       if (n == 0) 
           return 1;                     // Base case 
       else 
           return n * factorial(n − 1);  // Recursive case 
   } 
 
  */
}