#include <iostream>
#include <vector>
#include <algorithm> // For sorting if needed
using namespace std;

int binarySearch(const vector<int>& vec, int target) {
    int left = 0, right = vec.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid overflow

        if (vec[mid] == target) {
            return mid; // Target found at index `mid`
        } else if (vec[mid] < target) {
            left = mid + 1; // Target is in the right half
        } else {
            right = mid - 1; // Target is in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin>>n;

    vector<int> v(n);
    cout << "Enter the elements of the vector (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // sort descending order

    int target;
    cout << "Enter the element to search for: ";
    cin >> target;

    int result = binarySearch(v, target);
    if (result != -1) {
        cout << "Element found at index " << result << "." << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int binarySearch(const vector<int>& vec, int target) {
//     int left = 0, right = vec.size() - 1;
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (vec[mid] == target) return mid;
//         else if (vec[mid] < target) left = mid + 1;
//         else right = mid - 1;
//     }
//     return -1;
// }

// int main() {
//     int n, target;
//     cout << "Size: "; cin >> n;
//     vector<int> v(n);
//     cout << "Elements: ";
//     for (int& x : v) cin >> x;
//     sort(v.begin(), v.end()); // Sort in ascending order

//     cout << "Search for: "; cin >> target;
//     int res = binarySearch(v, target);
//     cout << (res != -1 ? "Found at index " + to_string(res) : "Not Found") << endl;
//     return 0;
// }

