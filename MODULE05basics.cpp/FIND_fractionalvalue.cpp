#include<iostream>
using namespace  std;
int main()
{ 

    // taking complex meaningful variable name

    float real_number;
    cout<<"Enter a value to find fractional part : ";
    cin>>real_number;
    // int interger_value = (int)real_number;
    // if(interger_value < 0) interger_value = interger_value - 1;
    int interger_value ;
    if (real_number < 0) interger_value = (int)(real_number - 1);
    else interger_value = (int)real_number;
    // float fractional_part  = real_number - interger_value ;
    cout<<"FRACTIONAL PART of "<<real_number<<" is "<<float(real_number - interger_value);
}