#include <iostream>
#include <vector>

using namespace std;

void MergeSort(vector<int>& arr, vector<int>& brr, vector<int>& res) {
    int n = 0;
    int m = 0;
    int k = 0;

    while(n < arr.size() && m < brr.size()){
        if(arr[n] < brr[m]) res[k++] = arr[n++];
        else  res[k++] = brr[m++];
    } 

    if (m == brr.size()) res[k++] = arr[n++];  // Copy remaining elements from arr
    else res[k++] = brr[m++];  // Copy remaining elements from brr
}

void recMergeSort(vector<int>& v) {
    int n = v.size();
    if (n == 1) return;

    int n1 = n / 2, n2 = n - n1;
    vector<int> a(n1), b(n2);

    for (int i = 0; i < n1; i++) a[i] = v[i];
    for (int i = 0; i < n2; i++) b[i] = v[i + n1];

    recMergeSort(a);  // Recursive call to sort first half
    recMergeSort(b);  // Recursive call to sort second half

    MergeSort(a, b, v);  // Merge sorted halves
    a.clear(); 
    b.clear();
}

int main() {
    int arr[] = {5, 4, 7, 3, 1, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n);  // Copy array to vector

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    recMergeSort(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}


































// #include<iostream>
// #include<vector>
// using namespace std;
// void MergeSort(vector<int>& arr, vector<int>& brr, vector<int>& res){
//     int n = 0 ;
//     int m = 0;  
//     int k = 0;
//     while(n < arr.size() && m < brr.size()){
//         if(arr[n] < brr[m]) res[k++] = arr[n++];
//         else  res[k++] = brr[m++];
//     }
//     if(n==arr.size()) res[k++] = brr[m++];
//     else res[k++] = arr[n++];    
// }

// void recMergeSort(vector<int>& v){
//     int n = v.size();
//     if(n==1) return ;
//     int n1 = n/2 , n2 = n - n/2;
//     vector<int>a(n1),b(n2);
//     for(int i = 0 ; i < n1 ; i++){
//         a[i] = v[i];
//     } 
//     for(int i = 0 ; i < n2 ; i++){
//         b[i] = v[i+n1];
//     } 
//     recMergeSort(a);
//     recMergeSort(b);
    
//     MergeSort(a,b,v);   

// }
// int main(){
//     int arr[] = {5,4,7,3,1,0,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);  // same as arr , copy 
//     for(int i = 0; i< n ; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     recMergeSort(v);
//     for(int i = 0; i< n ; i++){
//         cout<<v[i]<<" ";
//     }
// }