#include <iostream>
using namespace std;
int main() {
int max1 ,max2 ;    
int a[6]={12 ,35, 1, 10, 29, 1};
max1 = max2 = -1;
for(int i=0;i<5;i++){
if(max1<a[i]){
max2=max1;
max1=a[i];
}
else if(max2<a[i] && a[i]!=max1){
max2=a[i];
}
}
if(max2==-1){
cout<<"No second element exists"<<endl;
}
else cout<<max2<<endl;
return 0;
}