#include<iostream>
using namespace std;
int main()
{
    int m , temp;
    cout<<"Enter rows/column : ";
    cin>>m;
    int a[m][m];
    for(int i = 0 ; i <= m-1 ; i++)
    {
        for(int j = 0 ; j <= m-1 ; j++)
        {
            cin>>a[i][j];
        }
    }
    // TRANSPOSE AT SAME MATRIX 
    for(int i = 0 ; i <= m-1 ; i++)
    {
        for(int j = i + 1 ; j <= m-1 ; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    cout<<endl<<endl;
    //OUTPUT
     for(int i = 0 ; i <= m-1 ; i++)
    {
        for(int j = 0 ; j <= m-1 ; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
   
   
    
}