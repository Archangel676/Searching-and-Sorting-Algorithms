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

  string one = getInputLine(zillowData);
  Region place = parseIntoRegion(one);

  // cout << place.ID << endl;
  // cout << place.cityName << endl;
  // cout << place.state << endl;

  // string two = getInputLine(zillowData);
  // string three = getInputLine(zillowData);
  // string four = getInputLine(zillowData);
  // string five = getInputLine(zillowData);
  // string six = getInputLine(zillowData);
  // cout << one << endl << two << endl;
  // cout << three << endl << four << endl;
  // cout << five << endl << six << endl;

  vector<Region> regions;
  regions = figuringThisOutStill(zillowData);
  cout << "Trying this, hopefully it works:" << endl;
  cout << regions.at(0).ID << endl;
  cout << regions.at(0).cityName << endl;
  cout << regions.at(0).state << endl;
  cout << "Trying index 300:" << endl;
  cout << regions.at(300).ID << endl;
  cout << regions.at(300).cityName << endl;
  cout << regions.at(300).state << endl;
  cout << "Trying index 2000:" << endl;
  cout << regions.at(2000).ID << endl;
  cout << regions.at(2000).cityName << endl;
  cout << regions.at(2000).state << endl;

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
