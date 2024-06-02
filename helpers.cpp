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

// Write code to open the file and then read in each line, parse the data, and
// create a Region. Add them all to a vector<Region> called regions.

// Print out the first five Regions (id, city, and state) in your vector.