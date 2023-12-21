#include <iostream>

using namespace std;

int arraySum(int arr[], int n)
{
    if(n <= 0)
    {
        return 0;
    }
    else
    {
        return arr[n-1] + arraySum(arr, n-1);
    }
}
int main()
{
    int arr[] = {6, 2, 3, 4, 5, 7};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Sum of array elements: "<<arraySum(arr, n)<<endl;

    return 0;
}
