#include <iostream>
using namespace std;
int counter(int n)
{
    int rem;
    int count = 0;
    while (n > 0)
    {
        rem = n % 10;
        n /= 10;
        count += 1;
    }
    return count;
}
int power(int n, int m)
{
    int pow = 1;
    for (int i = 1; i <= m; i++)
    {
        pow = pow * n;
    }
    return pow;
}
bool Arm(int n,int m)
{
    int rem;
    int ans = 0;
    int orig = n;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans + power(rem,m);
        
    }
    if (ans == orig)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cout << "ENter the number=";
    cin >> n;
    int digit =counter(n);
    cout<<Arm(n,digit);
}