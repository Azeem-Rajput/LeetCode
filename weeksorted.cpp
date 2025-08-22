#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int first=-1;
    int last=-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    start=0;
    end=n-1;
    while(start<=end)
    
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<"Enter tyhe array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key=";
    cin>>key;
    cout<<BinarySearch(arr,n,key);
    return 0;
}