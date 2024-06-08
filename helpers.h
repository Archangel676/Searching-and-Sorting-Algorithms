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

struct PriceRecord {
  int regionID = 0;
  // that will look like "2020-12-31"
  string date = "";
  double value = 0;
};

PriceRecord parseIntoPriceRecord(const string& input);

vector<PriceRecord> parseFileIntoPriceRecord(ifstream& addressFile);

Region recursiveBinarySearchHelper(const int& value, const vector<Region>& vec,
                                   int low, int high);

Region binaryFind(const int& value, const vector<Region>& vec);

#endif // HELPERS_H