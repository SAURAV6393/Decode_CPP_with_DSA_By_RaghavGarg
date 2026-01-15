#include<iostream>
using namespace std;

void swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return ;
}

int main(){
    int a = 8 , b = 3;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    swap(&a ,&b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;

}

// output :
// a = 8
// b = 3
// a = 3
// b = 8