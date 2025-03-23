#include<iostream>
#include<vector>
using namspace std;
int main()
{
    int n ;
    cout<<"Enter size :";
    vector<int> v(n);
    cout<<endl<<""
    bool flag = false;
    for(int i = 0 ; i < v ; i++ )
    {
        cin>>v[i];
    }
    for(int i = 0 ; i < n ; i++ )
    {
        cout<<v[i]<<" ";
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i+ 1 ; j < n ; j++)
        {
            if(v[i]== v[j])
            {
               bool flag = false;
            }
        }
    }
    cout<<endl<<flag;

}