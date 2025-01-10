#include<iostream>
using namespace std;
int main()
{ 
    int n , m;
    cout<<"Enter row : ";
    cin>>n;
    cout<<"Enter column : ";
    cin>>m;
    int sum = 0;
    int arr[n][m];
    cout<<"ENTER INPUT : ";
    for(int i = 0 ; i< n ; i++)
    {
        for(int j = 0 ; j< m ; j++)
        {
            cin>>arr[i][j];
        }
    }
     for(int i = 0 ; i< n ; i++)
    {
        for(int j = 0 ; j< m ; j++)
        {
            cout<<arr[i][j]<<" ";
            sum += arr[i][j];
        }
    }
    cout<<endl<<sum;
}