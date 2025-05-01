#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    // print array before sorting
    cout <<"Array before sorting: ";
    for(int i = 0; i < n; i++) cout<< arr[i] << " ";
    cout<<endl;
    for(int i = 0; i < n; i++) {
        int j = i;
        while(j >= 1  && (arr[j] < arr[j-1])) {
            swap(arr[j], arr[j-1]);
            sum++;
            j--; 
            }
        }
    // print array after sorting
    cout << "Array after sorting: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    cout << "Number of swaps: " << sum << endl;
    return 0;
}