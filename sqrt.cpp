#include<iostream>
using namespace std;
int BinarySearch(int n)
{
    int start=1;
    int end=n;
    int mid;
    int ans;
    if(n<2)
    {
        return n;
    }
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid==n/mid)
        {
            ans= mid;
            break;
        }
        else if(mid<n/mid)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            
            end=mid-1;
        }
    }
    return ans;

}
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<BinarySearch(n);
    return 0;
}

