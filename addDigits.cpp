#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number=";
    cin >> n;
    while(n>9)
    {
        int rem;
        int ans = 0;
        while (n !=0)
        {
            rem = n % 10;
            n /= 10;
            ans+= rem;
        }
        n=ans;
    }
    cout <<n;
}