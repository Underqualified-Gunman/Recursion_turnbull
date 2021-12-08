//created by liam turnbull for dr T at TCC

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

  if(i > 0)// checks to see if i is 
  {
    int temp;
    temp = i - 1;
    i = i * temp;
  
    

    return factorialR(i-1 );
  }
  else return i;
}