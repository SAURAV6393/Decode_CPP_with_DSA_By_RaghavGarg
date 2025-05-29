#include<iostream>
using namespace std;
// 1
// 2 3
// 4 5 6
// 7 8 9 10
int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    int k = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i ; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
  
    return 0 ;
}