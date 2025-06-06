#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j < 2*i  ; j++){
             if((i+j<=n))cout<<"   ";
             else cout<<" * ";
        }
        cout<<endl;
    }
}