//Example 2: Write a C++ program to demonstrate the relationship between
//arrays and pointers.

#include<iostream>
using namespace std;
int main()
{
    int i, x[6], sum = 0;
    cout<<"Enter 6 numbers: "<<endl;
    for(i = 0; i < 6; ++i)
    {
    // variable name x points to the memory address of the first element
        cin>> x[i]; // Equivalent to scanf("%d", &x[i]) or cin>> &x[i];
        sum += x[i]; // Equivalent to sum += x[i]
    }
    cout<<"Sum = "<< sum<<endl;
    return 0;
}
