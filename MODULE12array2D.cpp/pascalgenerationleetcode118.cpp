#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int numbers[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Sort the array in ascending order
    sort(0,3);

    // Display sorted numbers
    cout << "Sorted numbers: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
