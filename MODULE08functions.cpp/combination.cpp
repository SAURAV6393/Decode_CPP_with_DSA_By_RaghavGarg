#include<iostream>
using  namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n; 
    int r;
    cout<<"Enter r : ";
    cin>>r;
    int nfact = 1;
    for(int i = n ; i>0 ; i--)
    {
        nfact *= i;
    }
    cout<<endl<<nfact;
     int rfact = 1;
    for(int i = r ; i>0 ; i--)
    {
        rfact *= i;
    }
    cout<<endl<<rfact;
     int nrfact = 1;
    for(int i = (n-r) ; i>0 ; i--)
    {
        nrfact *= i;
    }
    cout<<endl<<nrfact;
    int ncr;
    ncr = nfact / (rfact * nrfact);
    cout<<endl<<ncr;
}