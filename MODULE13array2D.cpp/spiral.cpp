#include<iostream>
using namespace std;
int main()
{ 
    int n , m;
    cout<<"Enter row : ";
    cin>>m;
    cout<<"Enter column : ";
    cin>>n;
    int arr[m][n];
    cout<<"ENTER INPUT : "<<endl;
    for(int i = 0 ; i< m ; i++)
    {
        for(int j = 0 ; j< n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    //  for(int i = 0 ; i< m ; i++)
    // {
    //     for(int j = 0 ; j< n ; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    // }
    cout<<endl;
    // spiral
    int minr = 0 , minc = 0;
    int maxr = m-1, maxc = n-1;
    int tne = n*m;
    int count = 0;
    while(minr<=maxr && minc<=maxc) 
    {
        //Right
        for(int j  = minc ; j<=maxc && count<tne ; j++)
        {
            cout<<arr[minr][j]<<" ";
              count++ ;
        }
        minr++ ;
       // alternate method if(minr>maxr || minc>maxc) break;
        // Down
         for(int i  = minr ; i<=maxr && count<tne ; i++)
        {
            cout<<arr[i][maxc]<<" ";
              count++ ;
        }
        maxc-- ;
       // if(minr>maxr || minc>maxc) break;
        // Left
         for(int j  = maxc ; j>=minc && count<tne ; j--)
        {
            cout<<arr[maxr][j]<<" ";
            count++ ;
        }
        maxr-- ;
       // if(minr>maxr || minc>maxc) break;
        // Top or Up
         for(int i  = maxr ; i>=minr && count<tne ; i--)
        {
            cout<<arr[i][minc]<<" ";
            count++ ;
        }
        minc++ ;
        }
}