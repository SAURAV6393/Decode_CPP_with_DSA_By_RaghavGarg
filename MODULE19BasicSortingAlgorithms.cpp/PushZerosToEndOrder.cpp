#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 0, 1, 2, 0, 0, 4, 0, 3};
    int n = 9;

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Bubble sort to push all zeros to the end
    for (int i = 0; i < n - 1; i++) { // n-1 passes
        // Traverse the unsorted part of the array
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] == 0) { // Swap zeros to the right
                swap(arr[j], arr[j + 1]);
            }
        }
```cpp
// Function to move all zeros to the end of the array
void moveZerosToEnd(int arr[], int n) {
    int writeIndex = 0;

    // Traverse the array and move non-zero elements to the front
    for (int readIndex = 0; readIndex < n; readIndex++) {
        if (arr[readIndex] != 0) {
            swap(arr[writeIndex], arr[readIndex]);
            writeIndex++;
        }
    }
}

int main() {
    int arr[] = {5, 0, 1, 2, 0, 0, 4, 0, 3};
    int n = 9;

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Move all zeros to the end of the array
    moveZerosToEnd(arr, n);

    // Display the sorted array
    cout << "Sorted array (zeros moved to the end): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
``````cpp
// Function to move all zeros to the end of the array
void moveZerosToEnd(int arr[], int n) {
    int writeIndex = 0;

    // Traverse the array and move non-zero elements to the front
    for (int readIndex = 0; readIndex < n; readIndex++) {
        if (arr[readIndex] != 0) {
            swap(arr[writeIndex], arr[readIndex]);
            writeIndex++;
        }
    }
}

int main() {
    int arr[] = {5, 0, 1, 2, 0, 0, 4, 0, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Move all zeros to the end of the array
    moveZerosToEnd(arr, n);

    // Display the sorted array
    cout << "Sorted array (zeros moved to the end): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

        // Display the array after each pass
        cout << "After pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    // Display the sorted array
    cout << "Sorted array (zeros moved to the end): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
