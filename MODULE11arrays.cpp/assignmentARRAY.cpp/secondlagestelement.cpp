#include <iostream>
#include<climits>
using namespace std;
int main() 
{
int arr[6]={12 ,35, 1, 10, 29, 1};
int max1=INT_MIN;
int max2 =INT_MIN;
for(int i=0;i<5;i++){
if(max1<arr[i]){
max2=max1;
max1=arr[i];
}
else if(max2<arr[i] && arr[i]!=max1){
max2=arr[i];
}
}
if(max2==INT_MIN){
cout<<"No second element exists"<<endl;
}
else cout<<max2<<endl;
return 0;
}