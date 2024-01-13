//## Passing One-dimensional Array to a Function

#include <iostream>
using namespace std;
// declare function to display marks
void display(int m[5])   // take a 1d array as parameter
{
    cout << "Displaying marks: " << endl;
// display array elements
    for (int i = 0; i < 5; ++i)
    {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}
int main()
{
// declare and initialize an array
    int marks[5] = {88, 76, 90, 61, 69};
// call display function
// pass array as argument
    display(marks);
    return 0;
}

