/*
CONCEPT: Switch-Case Statement for Multiple Discrete Options
ADVANTAGES OVER IF-ELSE:
1. Cleaner code when checking one variable against many values
2. Better readability for menu-driven programs
3. Faster execution (direct jump to case)
IMPORTANT: Always use 'break' to exit switch, else falls through to next case
*/
#include<iostream>
using namespace std;
int main ()
{
    int x ;
    cout<<"Enter the number : ";
    cin>>x;
    switch(x)                           // Check value of x
    {
        case 1:                         // If x equals 1
        cout<<"MONDAY";
        break;                          // Exit switch
        case 2:                         // If x equals 2
        cout<<"TUESDAy";
        break;
        case 3:                         // If x equals 3
        cout<<"WEDNESDAY";
        break;
        case 4:                         // If x equals 4
        cout<<"THURSDAY";
        break;
        case 5:                         // If x equals 5
        cout<<"FRIDAY";
        break;
        case 6:                         // If x equals 6
        cout<<"SATURDAY";
        break;
        case 7:                         // If x equals 7
        cout<<"SUNDAY";
        break;
        default:
        cout<<"INVALID INPUT";
    }
}
