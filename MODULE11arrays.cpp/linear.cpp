#include<iostream>
using namespace std;
int main ()
{
    int arr[5] = {1,2,3,4,5};
    int find = 3;
    for(int i = 0; i<5; i++)
    {
        if(find==arr[i])
        cout<<"SUCCESSFUL"<<" "<<"index is "<<i;
    }
    

}