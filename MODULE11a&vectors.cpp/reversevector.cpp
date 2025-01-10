#include<iostream>
#include<vector>
using namespace std;
void display (vector<int>& a)
{
    for(int i = 0; i<a.size() ; i++)
    {
        cout<<a[i]<<" ";
        
    }
     cout<<endl;
}
 void reversePart(int i , int j , vector<int>& v)
    {
        while(i<=j)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
   int main()
   {
    int size;
    cout<<"ENTER THE ARRAY SIZE: ";
    cin>>size;
    vector<int>v(size);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(7);
    for(int i = 0; i<v.size() ; i++)
    {
        cin>>v[i];
        
    }
    display(v);
    // int k = 10 ;
    int n = v.size();
    // if(k>n )
    // {
    //     k = k % n;
    // }
    int k;
    cout<<endl<<"STEPS : ";
    cin>>k;
    reversePart(0,n-k-1,v);
    //display(v);
    reversePart(n-k,n-1,v);
    //display(v); 
    reversePart(0,n-1,v);
    cout<<"FINAL ROTATE ARRAY : ";
    display(v);
   }


