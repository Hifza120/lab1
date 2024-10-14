#include<iostream>
#include<string>
using namespace std;
template<typename T>
int    binarySearch(T ARR[], T key, int size){
	int low = 0;
	int high = size - 1;
	while (low <= high){
		int mid = (low + high) / 2;
		if (ARR[mid] == key){
			return mid;
		}
		else if (ARR[mid] < key){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return -1;
}
template<typename C>
void  printSearchResult(int index, C key){
	cout << " Key " << key << " Found  at " << index << endl;
}
int main() {
	// Test with an integer array (sorted) of size 5
	const int size = 5;
	int intArray[5] = { 11, 12, 22, 25, 64 };
	int intKey = 22;
	int intIndex = binarySearch(intArray, intKey,size);
	printSearchResult(intIndex, intKey);

	// Test with a float array (sorted) of size 4
	const int size1= 4;
	float floatArray[4] = { 0.57, 1.62, 2.71, 3.14 };
	float floatKey = 2.71;
	int floatIndex = binarySearch(floatArray, floatKey,size1);
	printSearchResult(floatIndex, floatKey);

	// Test with a string array (sorted) of size 4
	const int size2 = 4;

	string stringArray[4] = { "apple", "banana", "grape", "orange" };
	string stringKey = "grape";
	int stringIndex = binarySearch(stringArray, stringKey,size2);
	printSearchResult(stringIndex, stringKey);

	return 0;
}
