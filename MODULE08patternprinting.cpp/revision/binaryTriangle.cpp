#include<iostream>
using namespace std;
// 1
// 0 1
// 1 0 1
// 0 1 0 1
int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i ; j++){
    //        if((i+j)%2==0) cout<<1<<" ";
    //        else cout<<0<<" ";
    //     }
    //     cout<<endl;
    // }
    int k ;
    for(int i = 1; i <= n ; i++){
        if(i%2==0) k = 0;
        else k = 1;
        for(int  j = 1 ; j <= i ; j++){
            cout<<k<<" ";
            if(k==1) k = 0;
            else k = 1;
        }
        cout<<endl;
    }
  
    return 0 ;
}