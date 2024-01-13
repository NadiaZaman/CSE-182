#include <iostream>
using namespace std;

int main()
{
    int n, block[15], required, i;
    cout<<"The number of elements: "<<endl;
    cin>>n;
    cout<<"Fill the block: "<<endl;

    for(i = 0; i < n; i++)
    {
        cin>>block[i];
    }
    cout<<"Enter required value: "<<endl;
    cin>>required;
    int loc = false;
    for(i = 0; i < n; i++)
    {
        if(block[i] == required)
        {
            loc = true;

        }

    }
    if(loc == true)
    {
        cout<<"The element "<<required<<" is found at position"<<(i+1)<<endl;
    }
    else
    {
        cout<<"The element "<<required<<" is not in the list";
    }
    return 0;
}
