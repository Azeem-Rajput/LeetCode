#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number=";
    cin >> n;
    int orig=n;
    int ans = 0;
    int rem;
    int mul=1;
    while (n)
    {
        rem=n%2;
        rem^=1;
        n/=2;
        ans+=rem*mul;
        mul*=2;
    }
    cout<<ans;
}