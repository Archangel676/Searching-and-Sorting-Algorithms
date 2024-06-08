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

  ifstream zillowRegion;
  zillowRegion.open("ZILLOW_REGIONS.csv");

  vector<Region> regions;
  regions = parseFileIntoRegions(zillowRegion);

  cout << "First Five Regions: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << ") " << regions.at(i).ID << " ";
    cout << regions.at(i).cityName << " ";
    cout << regions.at(i).state << endl;
  }
  cout << endl;

  cout << "-----------------------------Part 2-----------------------------"
       << endl;

  clock_t start2 = clock();

  for (size_t i = 0; i < regions.size(); i++) {
    placeSmallestRemaining(regions, i);
  }

  clock_t end2 = clock();
  cout << "Insertion sort of data took "
       << 1.0 * (end2 - start2) / CLOCKS_PER_SEC << " seconds." << endl;

  cout << "First Five Regions Sorted by ID Number: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << ") " << regions.at(i).ID << " ";
    cout << regions.at(i).cityName << " ";
    cout << regions.at(i).state << endl;
  }
  cout << endl;

  cout << "-----------------------------Part 3-----------------------------"
       << endl;

  clock_t start3 = clock();

  mergeSort(regions);

  clock_t end3 = clock();
  cout << "Merge sort of data by city name took "
       << 1.0 * (end3 - start3) / CLOCKS_PER_SEC << " seconds." << endl;

  cout << "First Five Regions Sorted by City Name: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << ") " << regions.at(i).ID << " ";
    cout << regions.at(i).cityName << " ";
    cout << regions.at(i).state << endl;
  }
  cout << endl;

  cout << "-----------------------------Part 4-----------------------------"
       << endl;
  // TO Do: Part 4

  ifstream zillowData;
  zillowData.open("ZILLOW_DATA.csv");

  vector<PriceRecord> prices;
  prices = parseFileIntoPriceRecord(zillowData);

  cout << "First Five PriceRecords: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << ") " << prices.at(i).regionID << " ";
    cout << prices.at(i).date << " ";
    cout << prices.at(i).value << endl;
  }
  cout << endl;

  // Print out the first five PriceRecord records (regionID, date, and value).

  // cout << "-----------------------------Part
  // 5-----------------------------"
  // << endl; TO Do: Part 5

  // cout << "-----------------------------Part
  // 6-----------------------------"
  // << endl; TO Do: Part 6
}
