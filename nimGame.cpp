#include<iostream>
using namespace std;
bool nim(int n)
{
    if(n%4==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int x;
    cout<<"Enter a number=";
    cin>>x;
    cout<<nim(x);
}