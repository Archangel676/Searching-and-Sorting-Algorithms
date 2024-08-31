## C++ Searching and Sorting Algorithms

# Assignment

The program should print out: 
- The first five Regions (id, city, and state) in your vector.
- Sort the regions vector using a quadratic sort (insertion or selection). The sort should sort based on region id in ascending order. (The smallest id is first, next smallest id is second, etc...).
	- Print out the time it took to do the sort. 
	- Print out the first five Regions (id, city, and state) in your vector.
	
- Create an implementation of MergeSort that sorts Regions by city in ascending order (alphabetically by city)

	- Print out the time it took to do the sort. 

	- Print out the first five Regions (id, city, and state) in your regionsByName.

- Implement a non-templated binaryFind function that takes a vector<Region>& regions and a int id.
	- Use your function to search regions and print out the Region (id, city, state) that has id 20317.
- Prompt the user to enter a city name and then read in a string using getline. Loop through prices and, for each one, use your binaryFind to look up the Region that is associated with the id for the current PriceRecord. Then, print out the city, state, date, and value.
- Print out the total time the loop took.

# Goal

Ability to understand and properly implement various searching and sorting algorithms including quadratic sorts, binary search, and merge sort.

## Attribution

The boilerplate starter code (Makefile, .vscode, .clang-format, and .gitignore) are from the VSCodeTemplates repository templates.
