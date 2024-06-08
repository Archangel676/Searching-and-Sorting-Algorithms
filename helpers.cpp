#include "helpers.h"

// Any needed implementations should be in helpers.cpp.

// When using a vector as a parameter should be a reference parameter:
// vector<Region>& regions
// Use .at(i)

// create a Region. Add them all to a vector<Region> called regions.

// Print out the first five Regions (id, city, and state) in your vector.
string getInputLine(ifstream& addressFile)
{
  string addressString;
  getline(addressFile, addressString);

  if (addressString.empty())
    return "The end";
  else
    return addressString;
}

Region parseIntoRegion(const string& input)
{
  size_t commaOne = input.find(",");
  size_t commaTwo = input.find(",", commaOne + 1);

  string areaCode = input.substr(0, commaOne);
  string city = input.substr(commaOne + 1, ((commaTwo - 1) - commaOne));
  string state = input.substr(commaTwo + 1);

  Region address;
  address.ID = stoi(areaCode);
  address.cityName = city;
  address.state = state;

  return address;
}

vector<Region> figuringThisOutStill(ifstream& addressFile)
{
  vector<Region> regions;

  while (!addressFile.fail()) {
    string location = getInputLine(addressFile);
    if (location == "The end") {
      break;
    }
    Region locAsRegion = parseIntoRegion(location);
    regions.push_back(locAsRegion);
  }
  return regions;
}

void placeSmallestRemaining(vector<Region>& vec, size_t index)
{
  int min = vec.at(index).ID;
  size_t minIndex = index;
  size_t size = vec.size();

  for (size_t i = index; i < size; ++i) {
    if (min > vec.at(i).ID) {
      min = vec.at(i).ID;
      minIndex = i;
    }
  }
  Region temp = vec.at(index); // region in the vector at the index
  vec.at(index).ID = min;
  vec.at(minIndex) = temp;
}

// clock_t start = clock();
// ... code you are timing ...
// clock_t end = clock();
// cout << "Took " << 1.0 * (end - start) / CLOCKS_PER_SEC << " seconds." <<
// endl;