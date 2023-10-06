// Check if a Number is Positive or Negative in C++
// Given an integer input, The objective is to write a code to Check if a Number is Positive or Negative in C++ Language.

// For Instance,
// Input : num = 10
// Output :The number is Positive



#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to check that it is Odd or Even"<<endl;
    cin>>num;
    if(num%2==0)
    {
        cout<<num<<" is an even number";
    }
    else
    {
        cout<<num<<" is an odd number";
    }
    return 0;
}
