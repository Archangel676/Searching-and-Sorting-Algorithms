#include "helpers.h"

// Any needed implementations should be in helpers.cpp.

// When using a vector as a parameter should be a reference parameter:
// vector<Region>& regions
// Use .at(i)

string getInput(ifstream& addressFile)
{
  string addressString;
  getline(addressFile, addressString);

  if (addressString.empty())
    return "The end";
  else
    return addressString;
}

string getAreaCode(const string& input)
{
  size_t commaOne = input.find(",");
  size_t commaTwo = input.find(",", commaOne + 1);

  // 20330,San Francisco,CA
  // 1st param = Position of the first character to be copied as a substring.
  // 2nd param = Number of characters to include in the substring,
  // default: all characters until the end of the string.

  // size_t areaCodeLength = fullAreaCode.length();
  // size_t cityLength = fullAreaCode.length();

  string areaCode = input.substr(commaTwo + 1);
  string city = input.substr(commaTwo + 1);
  string state = input.substr(commaTwo + 1);

  return "formatedAreaCode";
}

// Write code to open the file and then read in each line, parse the data, and
// create a Region. Add them all to a vector<Region> called regions.

// Print out the first five Regions (id, city, and state) in your vector.