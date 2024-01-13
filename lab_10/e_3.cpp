//Example 3: Write a C++ program to understand how the addresses can be
//passed as arguments to a function.

#include <iostream>
using namespace std;
void swap(int *n1, int *n2);
int main()
{

    int num1, num2;
    cout<<"num1: ";
    cin >> num1;
    cout<<"num2: ";
    cin >> num2;
    cout<< num1<<endl<<&num1<<endl;
// address of num1 and num2 is passed
    swap( &num1, &num2);
    cout << "num1 = "<< num1 << endl;
    cout << "num2 = "<< num2;

    return 0;
}
void swap(int* n1, int* n2)
{
    int temp;
    temp = *n1;

    *n1 = *n2;
    *n2 = temp;

}
