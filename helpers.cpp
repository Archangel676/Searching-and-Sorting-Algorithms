#include "helpers.h"

// Any needed implementations should be in helpers.cpp.

// When using a vector as a parameter should be a reference parameter:
// vector<Region>& regions
// Use .at(i)

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

vector<Region> parseFileIntoRegions(ifstream& addressFile)
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
  Region temp = vec.at(index);
  vec.at(index) = vec.at(minIndex);
  vec.at(minIndex) = temp;
}

vector<Region> slice(const vector<Region>& vec, size_t startLoc, size_t endLoc)
{
  vector<Region> newVec;
  for (size_t i = startLoc; i < endLoc; i++) {
    newVec.push_back(vec.at(i));
  }
  return newVec;
}

vector<Region> merge(const vector<Region>& vec1, const vector<Region>& vec2)
{
  vector<Region> newVec;

  size_t i = 0;
  size_t j = 0;

  while (i < vec1.size() && j < vec2.size()) {
    if (vec1.at(i).cityName < vec2.at(j).cityName) {
      newVec.push_back(vec1.at(i));
      i++;
    } else {
      newVec.push_back(vec2.at(j));
      j++;
    }
  }
  while (i < vec1.size()) {
    newVec.push_back(vec1.at(i));
    i++;
  }
  while (j < vec2.size()) {
    newVec.push_back(vec2.at(j));
    j++;
  }
  return newVec;
}

void mergeSort(vector<Region>& vec)
{
  if (vec.size() <= 1) {
    return;
  }

  size_t halfSize = vec.size() / 2;
  vector<Region> firstHalf = slice(vec, 0, halfSize);
  vector<Region> secondHalf = slice(vec, halfSize, vec.size());

  mergeSort(firstHalf);
  mergeSort(secondHalf);

  vector<Region> total = merge(firstHalf, secondHalf);

  for (size_t i = 0; i < vec.size(); i++) {
    vec.at(i) = total.at(i);
  }
}

// COME BACK HERE
// I don't think I did this section how it's asking us to do it :(

// void mergeSortOfRegionsByCity(vector<Region>& vec)
// {
//   vector<Region> regionsByName = vec;
//   mergeSort(vec);
// }

// CURRENT WORK
// -----------------------------------------------------------------------------------------------
