#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& vec, int target) {
    // Iterate through the vector
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            return i;  // Return the index if the target is found
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int target;
    cout << "Enter the element to search for: ";
    cin >> target;

    int result = linearSearch(v, target);
    if (result != -1) {
        cout << "Element found at index " << result << "." << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
