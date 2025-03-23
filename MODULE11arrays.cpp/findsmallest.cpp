#include <iostream>
using namespace std;

int main() {
    cout << "Enter 5 elements of the array: " << endl;
    int a[5];
    
    // Input the elements of the array
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    
    // Initialize smallest with the first element of the array
    int smallest = a[0];
    
    // Traverse the array to find the smallest element
    for (int i = 1; i < 5; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }
    
    // Print the smallest element
    cout << "The smallest element is: " << smallest << endl;

    return 0;
}
