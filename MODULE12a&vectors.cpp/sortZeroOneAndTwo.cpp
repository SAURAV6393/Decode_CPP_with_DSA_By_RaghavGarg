#include<iostream>
#include<vector>
using namespace std;
void sort02(vector<int>& nums)
{
      int lo = 0;
        int mid = 0;
        int hi =  nums.size()-1 ;
        while(mid<=hi)
        {
            if(nums[mid]==2)
            {
                int temp = nums[mid];
                nums[mid] = nums[hi];
                nums[hi]  = temp;
                hi-- ;
            }
            else if(nums[mid]==0)
            {
                int temp = nums[mid];
                nums[mid] = nums[lo];
                nums[lo] = temp;
                lo++;
                mid++ ;
            }
            else
            mid++ ; 
        }
}
void sort01(vector<int>& v)
{
    int n = v.size();
    int noo = 0;
    int noz = 0;
    for(int  i = 0 ; i<n ; i++)
    {
        if (v[i]==0)
        noz++;
        else
        noo++;
    }
    // filling elements 
    for(int  i = 0 ; i < n ; i++)
    {
        if(i<noz)
        v[i] = 0;
        else 
        v[i] = 1;
    }
}
int main()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
   
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
    for(int  i = 0 ; i<v.size() ; i++ )
    {
        cout<<v[i]<<" ";
    }
        cout<<endl;
    sort02(v);
    for(int  i = 0 ; i<v.size() ; i++ )
    {
        cout<<v[i]<<" ";
    }  
    cout<<endl<<"BYE BYE ";  

}