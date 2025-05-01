#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int arr[] = {2, 4, 5, 6, 8, 2, 2};
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j + 1])
            {
                count++;
            }
        }
    }
    if (count > n / 2)
    {
        cout << count;
    }
}