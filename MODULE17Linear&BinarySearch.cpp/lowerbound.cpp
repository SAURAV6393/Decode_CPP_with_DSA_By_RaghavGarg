#include<iostream>
using namespace std;
int main ()
{
    int arr[9] = {1,2,4,5,9,15,18,21,24};
    int n = 9 ;
    int x;
    cout<<"Enter no. ";
    cin>>x;
    int  lo = 0 ;
    int hi = n-1;
    bool flag =  false;
    while(lo<=hi)
    {
        int mid = lo + (hi - lo )/ 2 ;
        if(arr[mid] == x)
        {
            flag = true ;
            cout<<arr[mid - 1]; // change arr[mid + 1]
            break ;
        }
        else if(arr[mid] < x) lo = mid + 1;
        else hi = mid - 1 ;
    }
    if(flag==false) cout<<arr[hi]<<" Element at index "<<hi; // UPPER BOUND only print cout<<arr[lo]
}