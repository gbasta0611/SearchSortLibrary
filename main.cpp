#include <iostream>
#include <vector>
#include <string>
#include "algorithms.h"

using namespace std;

template <typename T>
void display_vector(const vector<T>& items){
	for (const T& item : items){
		cout << item << " ";
	}
	cout << endl;
}

int main()
{
	cout << "CUSTOM SEARCH AND SORT LIBRARY!!\n";

	vector<int> numbers = {25, 12, 6, 74, 53, 2, 19, 44, 88, 10, 67};

	cout << "Original Numbers: ";
	display_vector(numbers);

	cout << "\nLINEAR SEARCH\n";

	int target = 10;

	if (linear_search(numbers, target)){
		cout << target << " was found!";
	} else {
		cout << target << " was not found in the collection!";
	}

	cout << "\nSELECTION SORT\n";

	selection_sort(numbers);

	cout << "Sorted Numbers: ";
	display_vector(numbers);

	cout << "\nBINARY SEARCH\n";

	target = 92;

	cout << target << (binary_search_custom(numbers, target) ? " was found\n" : " was not found in the collection!\n");

	vector<string> names = {"Casey", "Amber", "BJ", "Brandon"};

	cout << "\nOG Names: ";
	display_vector(names);

	cout << "Linear search for BJ: " << (linear_search(names, string("BJ")) ? " was found\n" : " was not found in the collection!\n");
	selection_sort(names);

	cout << "Sorted names: ";
	display_vector(names);

	cout << "BInary search for Lebron James: " << (binary_search_custom(names, string("Lebron James")) ? " was found\n" : " was not found in the collection!\n");
}
