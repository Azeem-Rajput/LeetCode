#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number=";
    cin >> n;
    int arr[n];
    int count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
        for (int i = 0; i <= n-1; i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[j]==arr[i])
                {
                    arr[i]=0;
                    count+=1;
                    break;
                }
            }
          
           if(arr[i]!=0)
           {
               cout<<arr[i];
           }
        }
        cout<<endl;
        cout<<count;
    
}