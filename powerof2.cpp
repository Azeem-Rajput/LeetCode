#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    if(n<1)
    {
        cout<<"please enter a valid number";
        return 0;
    }
    while(n!=1)
    {
        if(n%2==1)
        {
            cout<<"not a power of 2";
            return 0;
        }
        n/=2;
    }
    cout<<"its a power of 2";
}