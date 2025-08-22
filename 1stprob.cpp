#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    char spc=' ';
    for(int row=1;row<=n;row++)
    {
        for(char col='A';col<='A'+(n-1);col++)
        {
            cout<<col;
            for(int col=1;col<=(row-1);col++)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int row=(n-1);row>=1;row--)
    {
        for(char col='A'+(n-1);col>='A';col--)
        {
            cout<<col;
            for(int col=1;col<=(row-1);col++)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}