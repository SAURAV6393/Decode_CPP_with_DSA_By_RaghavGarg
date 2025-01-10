// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
#include<iostream>
#include<vector>
using namespace std;
int main()
{  int n= 3 , m=6 , k=6;
   int a1[n] = {2,5,6};
   int a2[m] = {1,2,3,0,0,0};
   int f[k];
   int i = n-1 ;
   int j= m - 1;
    k = k-1;
   for( i = 0 ; i< n ; i++)
   {
     cout<<a1[i]<<" ";
   }
   cout<<"  ";
   for( j = 0 ; j< m ; j++)
   {
     cout<<a2[j]<<" ";
   }
   while(i<=0 && j<=0)
   {
    if(a1[i]>a2[j])
    {
        f[k] = a1[i];
        k-- ;
        i-- ;
    }
    else
    {
        f[k] = a2[j];
        k-- ;
        j-- ;
    }
   }
   if(i==0)
   {
    while(j<=0)
    {
         f[k] = a2[j];
        k-- ;
        j-- ;
    }
   }
    if(j==0)
   {
    while(i<=0)
    {
         f[k] = a1[i];
        k-- ;
        i-- ;
    }
   }
   cout<<endl;
   for(int t = 0 ; t< k ; t++)
   {
     cout<<f[t]<<" ";
   }
}   