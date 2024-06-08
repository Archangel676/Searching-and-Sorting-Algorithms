#ifndef HELPERS_H
#define HELPERS_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
//   Any structs/classes/functions you define should be in helpers.h

struct Region {
  int ID = 0;
  string cityName = "";
  string state = "";
};

string getInputLine(ifstream& addressFile);

Region parseIntoRegion(const string& input);

vector<Region> parseFileIntoRegions(ifstream& addressFile);

void placeSmallestRemaining(vector<Region>& vec, size_t index);

vector<Region> slice(const vector<Region>& vec, size_t startLoc, size_t endLoc);

vector<Region> merge(const vector<Region>& vec1, const vector<Region>& vec2);

void mergeSort(vector<Region>& vec);

struct PriceRecords {
  int region = 0;
  // that will look like "2020-12-31"
  string date = "";
  double value = 0;
};

// Write code to open the file and then
// read in each line,
// parse the data, and
// create a PriceRecord.
// Add them all to a vector<PriceRecord> called prices.

// Print out the first five PriceRecord records (regionID, date, and value).

#endif // HELPERS_H