#include "helpers.h"
#include <iostream>

using namespace std;

// One main function that does each of the tasks below in order.

// You should use functions to make your main a manageable length and easy to
// understand.

// Anything you are asked to print out should be printed in your final program
// with a clear label.

// That is your proof that your code is working.

int main()
{
  cout << "-----------------------------Part 1-----------------------------"
       << endl;
  // TO Do: Part 1

  ifstream zillowData;
  zillowData.open("ZILLOW_REGIONS.csv");

  vector<Region> regions;
  regions = figuringThisOutStill(zillowData);

  cout << "First Five Regions: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << i << ") " << regions.at(i).ID << " ";
    cout << regions.at(i).cityName << " ";
    cout << regions.at(i).state << endl;
  }
  cout << endl;

  // cout << "-----------------------------Part 2-----------------------------"
  // << endl; TO Do: Part 2

  // cout << "-----------------------------Part 3-----------------------------"
  // << endl; TO Do: Part 3

  // cout << "-----------------------------Part 4-----------------------------"
  // << endl; TO Do: Part 4

  // cout << "-----------------------------Part 5-----------------------------"
  // << endl; TO Do: Part 5

  // cout << "-----------------------------Part 6-----------------------------"
  // << endl; TO Do: Part 6
}
