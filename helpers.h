#ifndef HELPERS_H
#define HELPERS_H

#include <fstream>
#include <iostream>
#include <string>

using namespace std;
//   Any structs/classes/functions you define should be in helpers.h

struct Region {
  int ID = 0;
  string cityName = "";
  string state = "";

  /**
   * @brief Get a single full address line from the input.txt file
   * @return string Full address as a string
   */
  string getInput(ifstream& addressFile);

  /**
   * @brief Takes the full address and returns the area code of the address as a
   * string
   * @param input Full address from input
   * @return string Returns a string of just the area code in digits
   */
  string getRegion(const string& input);
};

#endif // HELPERS_H