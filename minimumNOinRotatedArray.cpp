#include<iostream>
using namespace std;
int smallest(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid;
    int small;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }

        else  if(arr[mid]<arr[0])
        
        {
            small=arr[mid];
            end=mid-1;
        }

    }
    return small;
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<"Enter an array =";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The minimum no. is=";
    cout<<smallest(arr,n);

}