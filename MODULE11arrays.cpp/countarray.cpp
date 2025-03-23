#include<iostream>
using namespace std;
int main  ()
{
    int size;
    int times = 0;
    cout<<"ARRAY SIZE: ";
    cin>>size;
    int arr[size];
    for(int i= 0 ; i<size ; i++)
    {
        cin>>arr[i];
    }
     for(int i= 0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    int find;
    cout<<endl<<"Enter find element: ";
    cin>>find;
     for(int i= 0 ; i<size ; i++)
    {
        if(find < arr[i])
         {  times++ } ;
    }
    cout<<endl<<"Greater than "<<" "<<times<< " ELEMENTS !";
}