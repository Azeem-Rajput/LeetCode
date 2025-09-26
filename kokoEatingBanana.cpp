#include<iostream>
using namespace std;
    int minEatingSpeed(int piles[], int h,int n) {
        int start=0,end=0,mid,ans;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=piles[i];
            end=max(end,piles[i]);
        }
        start=sum/h;
        if(start==0)
        {
            start=1;
        }
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int total=0;
            for(int i=0;i<n;i++)
            {
                total+=piles[i]/mid;
                if(piles[i]%mid)
                {
                    total++;
                }
            }
            if(total>h)
            {
                
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
    int main()
    {
        int arr[1000];
        int n;
        cout<<"Enter a size of array=";
        cin>>n;
        int h;
        cout<<"Enter a target hours=";
        cin>>h;

        cout<<"Enter an aaray=";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<minEatingSpeed(arr,h,n);
    }
