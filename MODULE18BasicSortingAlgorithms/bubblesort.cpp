#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {3, 7, 8, 1, 4, 9, 2};
    int n = 7;

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    

    // bubble sort 
    // for (int i = 0; i < n - 1; i++) { // n-1 passes
    //     // Traverse the unsorted part of the array
    //     for (int j = 0; j < n - 1 - i; j++) {
    //         if (arr[j] > arr[j + 1]) { // Swap if elements are out of order
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }


    // Optimized Bubble Sort
    for (int i = 0; i < n - 1; i++) { // n-1 passes
        bool isSorted = true; // Flag to check if the array is already sorted

        // Traverse the unsorted part of the array
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) { // Swap if elements are out of order
                swap(arr[j], arr[j + 1]);
                isSorted = false; // Array is not sorted, continue
            }
        }

        // If no swapping happened, the array is already sorted
        if (isSorted) {
            break;
        }

        // Display the array after each pass
        cout << "After pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
