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
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = (ans * 10) + rem;
    }
    if (orig == ans)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "it is not a palindrome";
    }
}