#include <iostream>
using namespace std;

int main() {
    int n = 5; // total number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            
            cout << "* ";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
