#include <iostream>
using namespace std;

int partition(int arr[], int si, int ei) {
    int pivotElement = arr[si]; // Choose the first element as the pivot
    int count = 0;

    // Count elements smaller than pivot to find correct pivot position
    for (int i = si + 1; i <= ei; i++) {
        if (arr[i] <= pivotElement) {
            count++;
        }
    }

    // Find the correct index for the pivot
    int pivotIdx = si + count;
    swap(arr[si], arr[pivotIdx]); // Move pivot to its correct position

    int i = si, j = ei;

    // Place elements smaller than pivot to the left and greater to the right
    while (i < pivotIdx && j > pivotIdx) {
        while (arr[i] <= pivotElement) i++;
        while (arr[j] > pivotElement) j--;

        if (i < pivotIdx && j > pivotIdx) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIdx; // Return the index of the pivot element
}

// Helper function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// QuickSort function using partition
void quickSort(int arr[], int si, int ei) {
    if (si >= ei) return;
    // 5,1,8,2,7,6,3,4
    int pivotIdx = partition(arr, si, ei);
    // 4,1,3,2,5,7,8,6
    quickSort(arr, si, pivotIdx - 1); // Sort left subarray
    quickSort(arr, pivotIdx + 1, ei); // Sort right subarray
}

int main() {
    int arr[] = {5, 1, 8, 2,7,6,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}