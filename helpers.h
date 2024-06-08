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

vector<Region> figuringThisOutStill(ifstream& addressFile);

void placeSmallestRemaining(vector<Region>& vec, size_t index);

#endif // HELPERS_H