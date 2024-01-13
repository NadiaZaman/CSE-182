//Function Type - 2: No arguments passed but a return value.
//Example: Write a C++ program to demonstrate the use of function type-2.


#include<iostream>
using namespace std;
int addition()
{
    int num1,num2, sum; // variable declaration
    cout<<"Enter number 1: "<<endl;
    cin>> num1;
    cout<<"Enter number 2: "<<endl;
    cin>> num2;
    sum = num1 + num2;
    return sum;
}
int main()
{
    int s;
    s = addition(); //Calling the function here
    cout<<"Output: "<< s;
    return 0;
}
