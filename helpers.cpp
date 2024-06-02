#include "helpers.h"

// Any needed implementations should be in helpers.cpp.

// When using a vector as a parameter should be a reference parameter:
// vector<Region>& regions
// Use .at(i)

/**
 * @brief Get a single full address line from the input.txt file
 * @return string Full address as a string
 */
string getInput(ifstream& addressFile)
{
  string addressString;
  getline(addressFile, addressString);

  if (addressString.empty())
    return "The end";
  else
    return addressString;
}

/**
 * @brief Takes the full address and returns the area code of the address as a
 * string
 * @param input Full address from input
 * @return string Returns a string of just the area code in digits
 */
string getAreaCode(const string& input)
{
  size_t commaOne = input.find(",");
  size_t commaTwo = input.find(",", commaOne + 1);
  string fullAreaCode = input.substr(commaTwo + 1);

  size_t areaCodeLength = fullAreaCode.length();

  if (areaCodeLength > 5) {
    size_t areaCodeDash = fullAreaCode.find("-");
    string formatedAreaCode = fullAreaCode.replace(areaCodeDash, 1, "");
    return formatedAreaCode;
  } else
    return fullAreaCode;
}

// Write code to open the file and then read in each line, parse the data, and
// create a Region. Add them all to a vector<Region> called regions.

// Print out the first five Regions (id, city, and state) in your vector.