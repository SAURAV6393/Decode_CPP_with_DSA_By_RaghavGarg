#include<iostream>
//#include<vector>
using namespace std;
int main ()
{
   int arr[5] = {9,2 ,30,46,59};
   
  // for(int i = 0 ; i < 5 ; i++)
  // {
  //   cout<<arr[i]<<" ";
  // }
   int *ptr = arr;
  // cout<<endl;
   for(int i = 0 ; i < 5 ; i++)
   {
     cout<<ptr[i]<<" ";
  //   ptr++ ;
    }
  // //cout<<*ptr;
  //cout<<*ptr<<" "<<ptr<<arr;
  //cout<<"SAURAV";
} 