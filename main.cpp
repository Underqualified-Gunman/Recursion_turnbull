//created by liam turnbull for dr T at TCC
#include "IVE.h"
#include <iostream>
using namespace std;

int factorialR(int);

int main() 
{
  int intput;
  cout << "enter the input for a factorial:";
  cin >> intput;

  cout <<endl << factorialR(intput);


} 

int factorialR(int i)
{
  // this function should take the starting number and multpily it down for example if the input is 7 then do 7 * 6 * 5 * 4 * 3 * 2 * 1. this would then return the result after all of have instanced

  if(i < 0)// checks to see if i is greater than 0
  {
    //int temp;
    //temp = i - 1;
    //i = i * temp;
    // simplified the above code by multiplying i in the return line.
    

    return (i * factorialR(i-1));
  }
  // below 
  else return i;
}