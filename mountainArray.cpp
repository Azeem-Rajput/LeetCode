#include<iostream>
using namespace std;
int PeakIndex(int arr[],int n){
    int start=1;
    int end=n-2;
    int mid;
    int ar;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            ar=mid;
            break;
        }
        else if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            ar=mid;
            end=mid-1;
        }
    }
    return ar;
}
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<"Enter the array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<PeakIndex(arr,n);
}