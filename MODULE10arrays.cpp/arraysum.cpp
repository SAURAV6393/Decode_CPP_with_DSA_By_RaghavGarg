1#include<iostream>
using namespace std;
int main()
{
    int size;
    int sum = 0;
    cout<<"ENTER SIZE ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i<size ; i++)
    {
        cin>>arr[i];
        sum +=arr[i];
    }
    cout<<endl<<"sum is "<<sum;
}