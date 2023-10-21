// C++ program for implementation 
// of Bubble sort 
#include <iostream> 
using namespace std; 

// A function for bubble sort 
void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n - 1; i++) 

		// Last i elements are already 
		// in place 
		for (j = 0; j < n - i - 1; j++) 
			if (arr[j] > arr[j + 1]) 
				swap(arr[j], arr[j + 1]); 
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

// Driver code 
int main() 
{ 
	int n = 25;
	int arr[] = { 5, 1, 4, 2, 8}; 
	int K = sizeof(arr) / sizeof(arr[0]); 
	bubbleSort(arr, K); 
	cout << "Sorted array: \n"; 
	printArray(arr, K); 
	return 0; 
}
