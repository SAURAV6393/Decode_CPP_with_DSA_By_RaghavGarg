#include<iostream>
using namespace std;
int main() {
cout<<"enter 5 elements of the array : "<<endl;
int a[5];
for(int i=0;i<5;i++){
cin>>a[i];
}
int x=0;
bool flag=false;
for(int i=0; i<5 ; i++){
if(a[i]!= x){
cout<<x<<endl;}
}
}
