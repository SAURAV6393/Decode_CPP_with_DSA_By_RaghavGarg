#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    // Creating an unordered_map
    // Key   -> int
    // Value -> string
    unordered_map<int, string> m;


    // --------------------------------------------------
    // 1. insert()
    // --------------------------------------------------

    pair<int, string> p1;
    p1.first = 29;
    p1.second = "Saurav";

    m.insert(p1);

    // Direct insertion
    m.insert({10, "Gaurav"});
    m.insert({20, "Shikha"});


    // --------------------------------------------------
    // 2. [] operator
    // --------------------------------------------------

    m[1] = "ABC";
    m[2] = "XYZ";


    // --------------------------------------------------
    // 3. Traversal
    // --------------------------------------------------

    // pair<int, string> p
    // auto p  -> automatically detects pair<int, string>

    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }


    // --------------------------------------------------
    // 4. size()
    // --------------------------------------------------

    cout << "\nSize: " << m.size() << endl;


    // --------------------------------------------------
    // 5. find()
    // --------------------------------------------------

    if (m.find(29) != m.end()) {
        cout << "Key 29 found" << endl;
    }
    else {
        cout << "Key 29 not found" << endl;
    }


    // --------------------------------------------------
    // 6. count()
    // --------------------------------------------------

    if (m.count(20)) {
        cout << "Key 20 exists" << endl;
    }
    else {
        cout << "Key 20 does not exist" << endl;
    }


    // --------------------------------------------------
    // 7. erase()
    // --------------------------------------------------

    m.erase(20);

    cout << "After erase, size: " << m.size() << endl;


    return 0;
}
 
/*
Time Complexity:
insert()  -> O(1) average, O(n) worst
[]        -> O(1) average, O(n) worst
find()    -> O(1) average, O(n) worst
count()   -> O(1) average, O(n) worst
erase()   -> O(1) average, O(n) worst
size()    -> O(1)

Traversal -> O(n)

Overall -> O(n) average
           O(n^2) worst case

Space Complexity:
O(n)
*/