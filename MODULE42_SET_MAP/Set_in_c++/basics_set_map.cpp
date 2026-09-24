#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){

    // ================= SET =================

    set<int> s;

    s.insert(5);     // TC: O(log n)
    s.insert(1);     // TC: O(log n)
    s.insert(7);     // TC: O(log n)

    // Set:
    // 1. Unique values store karta hai
    // 2. Automatically ascending order mein rakhta hai
    // 3. Internally Balanced BST (Red-Black Tree) use hota hai
    //
    // Insert  -> O(log n)
    // Search  -> O(log n)
    // Delete  -> O(log n)
    // Access  -> O(log n) using find()
    // Space   -> O(n)

    // always ascending order mein print karega
    for(int x : s){
        cout << x << " ";
    }

    cout << endl;


    // ================= MAP =================

    map<int, int> m;

    m[1] = 10;       // TC: O(log n)
    m[8] = 50;       // TC: O(log n)
    m[3] = 20;       // TC: O(log n)
    m[4] = 40;       // TC: O(log n)

    // Map:
    // 1. Key-Value pair store karta hai
    // 2. Keys unique hoti hain
    // 3. Keys ke basis par ascending order mein sort hota hai
    // 4. Internally Balanced BST use hota hai
    //
    // Insert  -> O(log n)
    // Search  -> O(log n)
    // Delete  -> O(log n)
    // Access  -> O(log n)
    // Space   -> O(n)

    // yaha KEY ke basis par sorting ho rahi hai
    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }


    // ================= QUICK REVISION =================

    // SET
    // Unique + Sorted
    // Insert/Search/Delete -> O(log n)
    // Space -> O(n)

    // MAP
    // Key-Value + Unique Key + Sorted by Key
    // Insert/Search/Delete -> O(log n)
    // Space -> O(n)
}