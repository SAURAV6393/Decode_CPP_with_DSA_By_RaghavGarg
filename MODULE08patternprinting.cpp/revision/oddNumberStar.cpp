#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    for(int i = 1 ; i<= n ; i++){
        for(int  j = 0; j<i;j++){
            cout<<2*j+1<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}
