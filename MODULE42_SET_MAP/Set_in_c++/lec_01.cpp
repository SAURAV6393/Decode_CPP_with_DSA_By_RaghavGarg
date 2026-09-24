#include <iostream>
#include <unordered_set>
using namespace std;

// unordered_set - Important STL Functions
//
// insert()  -> element insert karta hai
// size()    -> total unique elements
// find()    -> element search karta hai
// begin()   -> first iterator
// end()     -> last ke next iterator
// erase()   -> element delete karta hai

int main() {

    // Creating unordered_set
    unordered_set<int> s;


    // --------------------------------------------------
    // 1. insert()
    // --------------------------------------------------

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);   // Duplicate -> ignored
    s.insert(5);
    s.insert(0);


    // --------------------------------------------------
    // 2. find()
    // --------------------------------------------------

    int target = 40;

    if (s.find(target) != s.end()) {
        cout << "Exists" << endl;
    }
    else {
        cout << "Not Exists" << endl;
    }


    // --------------------------------------------------
    // 3. Traversal
    // --------------------------------------------------

    for (int element : s) {
        cout << element << " ";
    }

    cout << endl;


    // --------------------------------------------------
    // 4. size()
    // --------------------------------------------------

    cout << "Size: " << s.size() << endl;


    // --------------------------------------------------
    // 5. erase()
    // --------------------------------------------------

    s.erase(3);

    cout << "After erase: ";

    for (int element : s) {
        cout << element << " ";
    }

    cout << endl;


    // --------------------------------------------------
    // 6. begin() and end()
    // --------------------------------------------------

    auto it = s.begin();

    cout << "First element: " << *it << endl;


    return 0;
}