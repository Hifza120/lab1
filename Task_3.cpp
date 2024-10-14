#include<iostream>
#include<string>
using namespace std;
template<typename T>
int linearSearch(T array[], T key, int size){
	for (int i = 0; i < size; i++){
		if (array[i] == key){
			return i;
		}
	}
}
template<typename T, typename C>
void   printSearchResult(T index,C key ){
	cout << " Key " << key << " Found  at " << index << endl;
}
int main() {
	// Test with an integer array of size 5
	int intArray[5] = { 64, 25, 12, 22, 11 };
	int intKey = 12;
	int size = sizeof(intArray) / sizeof(intArray[0]);
	int intIndex = linearSearch(intArray, intKey, size);
	printSearchResult(intIndex, intKey);

	// Test with a float array of size 4
	float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
	float floatKey = 1.62;
	int floatIndex = linearSearch(floatArray, floatKey,size);
	printSearchResult(floatIndex, floatKey);

	// Test with a string array of size 4
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	string stringKey = "banana";
	int stringIndex = linearSearch(stringArray, stringKey,size);
	printSearchResult(stringIndex, stringKey);

	return 0;
}

