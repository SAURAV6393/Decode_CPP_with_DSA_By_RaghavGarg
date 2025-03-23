#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s ;
    cout<<"Enter a string : ";
    cin>>s;
    int count = 0;
    int n = s.length();
    for(int i = 0 ; i< n ; i++)
    {
        if(n==1) break;
        if(n==2 && s[0]!=s[1]) 
        {
            count = 1;
            break ;
        }
        if(i==0)
        {
            if(s[i]!=s[i+1]) count++ ;
        }
        else if(i==n-1)
        {
            if(s[i]!=s[i-1]) count++ ;
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]) 
        {
            count++ ;

        }
    }
    cout<<count;
}