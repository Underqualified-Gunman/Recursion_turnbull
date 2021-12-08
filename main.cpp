//created by liam turnbull for dr T at TCC
#include "IVE.h"
#include <iostream>
using namespace std;

int factorialR(int);
void hanoi(int, int, int, int);

int main() 
{
  int intput;
  cout << "enter the input for a factorial:" << endl;
  validateInt(intput);

  //cout << factorialR(6) << endl;
  cout << factorialR(intput) << endl;
  cout << "End of Factorials start of Towers of Hanoi" << endl;
  //
  cout << "start of tower of hanoi solution" << endl;
  const int NUM_DISCS = 3;
  const int LEFT_PEG = 1;
  const int RIGHT_PEG = 3;
  const int MIDDLE_PEG = 2;

  hanoi( NUM_DISCS, LEFT_PEG, MIDDLE_PEG, RIGHT_PEG);


  cout << "tower of hanoi is solved" << endl;
  return 0;
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
}

void hanoi(int i, int peg1, int peg2, int peg3)
{
  // peg 1 should be the peg that all the discs start on. 
  // peg 2 is the temporary peg that allows you to slowly move discs around
  // peg 3 is the goal peg and you want to have all the discs on this peg without having any larger onces on top
  // i holds the number of discs that need to be moved 
  // calling this funtion once will make it attempt to solve
  // the tower of hanoi problem if it is unable to a if else block will break the solution down some this is then iterated upon until its solved
  // rules
  //Only one disc may be moved at a time.
  //A disc cannot be placed on top of a smaller disc.
  //All discs must be stored on a peg except while being moved.

  if (i > 0)
  {
    hanoi(i - 1, peg1, peg2, peg3);
    cout << "moving a disc from peg " << peg1 << "to peg" << peg3 << endl;
    hanoi(i - 1, peg2, peg3, peg1);


  }

}