#include "helpers.h"
#include <iostream>
#include <vector>

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

  ifstream zillowData;
  zillowData.open("ZILLOW_REGIONS.csv");

  vector<Region> regions;
  regions = figuringThisOutStill(zillowData);

  cout << "First Five Regions: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << ") " << regions.at(i).ID << " ";
    cout << regions.at(i).cityName << " ";
    cout << regions.at(i).state << endl;
  }
  cout << endl;

  cout << "-----------------------------Part 2-----------------------------"
       << endl;

  clock_t start = clock();

  for (size_t i = 0; i < regions.size(); i++) {
    placeSmallestRemaining(regions, i);
  }

  clock_t end = clock();
  cout << "Insertion sort of data took " << 1.0 * (end - start) / CLOCKS_PER_SEC
       << " seconds." << endl;

  cout << "First Five Regions Sorted by ID Number: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << ") " << regions.at(i).ID << " ";
    cout << regions.at(i).cityName << " ";
    cout << regions.at(i).state << endl;
  }
  cout << endl;

  cout << "-----------------------------Part 3-----------------------------"
       << endl;

  mergeSort(regions);

  cout << "First Five Regions Sorted by City Name: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << ") " << regions.at(i).ID << " ";
    cout << regions.at(i).cityName << " ";
    cout << regions.at(i).state << endl;
  }
  cout << endl;

  // cout << "-----------------------------Part
  // 4-----------------------------"
  // << endl; TO Do: Part 4

  // cout << "-----------------------------Part
  // 5-----------------------------"
  // << endl; TO Do: Part 5

  // cout << "-----------------------------Part
  // 6-----------------------------"
  // << endl; TO Do: Part 6
}
