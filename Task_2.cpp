#include<iostream>
#include<string>
using namespace std;
template<typename T>
void selectionSort(T array[],int size){
	for (int i = 0; i < size; i++){
		int smallSub= i;
		for (int j = i+1; j < size ; j++){
			if (array[j]<array[smallSub]){
				smallSub = j;
			}
		}
		T temp = array[i];
		array[i] = array[smallSub];
		array[smallSub] = temp;
	}
}
template<typename T>
void printArray(T arr[],int size){
	cout<<" Array :    ";
	for (int i = 0; i < size; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;
}
int main() {
	// Test with an integer array of size 5
	int intArray[5] = { 64, 25, 12, 22, 11 };
	int size = sizeof(intArray) / sizeof(intArray[0]);

	cout << "Original integer array: ";
	printArray(intArray,size);
	selectionSort(intArray,size);
	cout << "Sorted integer array: ";
	printArray(intArray,size);

	// Test with a string array of size 4
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	cout << "\nOriginal string array: ";
	int size1 = sizeof(stringArray) / sizeof(stringArray[0]);
	printArray(stringArray,size1);
	selectionSort(stringArray,size1);
	cout << "Sorted string array: ";
	printArray(stringArray,size1);

	return 0;
}
