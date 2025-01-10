#include <iostream>
#include <string>
using namespace std;

int countingValleys(int steps, string path) {
    int seaLevel = 0;
    int valleys = 0;

    for (char step : path) {
        if (step == 'U') {
            seaLevel++;
            if (seaLevel == 0) {
                valleys++;
            }
        } else if (step == 'D') {
            seaLevel--;
        }
    }

    return valleys;
}

int main() {
    int steps;
    string path;

    cin >> steps;
    cin >> path;

    cout << countingValleys(steps, path) << endl;
    
    return 0;
    
}
