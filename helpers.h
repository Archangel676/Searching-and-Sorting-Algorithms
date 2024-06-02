#ifndef HELPERS_H
#define HELPERS_H

#include <fstream>
#include <iostream>
#include <string>

using std::string;
//   Any structs/classes/functions you define should be in helpers.h

struct Region {
  int ID;
  string cityName;
  string state;
};

string getInput(ifstream& addressFile);

#endif HELPERS_H