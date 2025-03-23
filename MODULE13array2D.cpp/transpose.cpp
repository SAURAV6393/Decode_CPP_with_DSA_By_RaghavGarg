#include<iostream>
using namespace std;
int main()
{
    int n , m;
    cout<<"Enter size : ";
    cin>>n;
    m=n;// n = col. m = rows
    int a[m][n];
    // INPUT
    for(int i = 0 ; i<m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl<<endl;
    // OUTPUT
    for(int i = 0 ; i<m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    // new , MATRIX
    int t[m][n];
    for(int i = 0 ; i<m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            t[i][j] = a[j][i];
        }
    }
    for(int i = 0 ; i<m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

}