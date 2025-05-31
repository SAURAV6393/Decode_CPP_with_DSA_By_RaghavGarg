#include<iostream>
using namespace std;
//   1 2 3 4   
// 1|      1
// 2|    1 2
// 3|  1 2 3 
// 4|1 2 3 4
int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        int k = 1;
        for(int j = 1; j <= n ; j++){
           if((i+j<=n)) cout<<"  ";
           else {
            cout<<k<<" ";
            k++;
           }
        }
        cout<<endl;
    }
  
    return 0 ;
}