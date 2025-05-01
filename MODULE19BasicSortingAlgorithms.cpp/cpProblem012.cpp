#include <iostream>
using namespace std;

int main() {
    int arr[7] = {0, 1, 1, 2, 0, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int noz = 0, noo = 0, nott = 0;

    // Count the number of 0s, 1s, and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            noz++;
        } else if (arr[i] == 1) {
            noo++;
        } else {
            nott++;
        }
    }

    // Overwrite the array with sorted values
    for (int i = 0; i < noz; i++) {
        arr[i] = 0;
    }
    for (int i = noz; i < noz + noo; i++) {
        arr[i] = 1;
    }
    for (int i = noz + noo; i < noz + noo + nott; i++) {
        arr[i] = 2;
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
