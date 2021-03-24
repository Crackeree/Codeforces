#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;
    cin>>n>>m;
    long long arr[n];
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        long long temp;
        cin>>temp;
        sum+=temp;
        arr[i]=sum;
    }

    while(m--)
    {
        long long temp ;
        cin>>temp;
        int low = 0 ,high = n-1 , mid ;
        for(;low<=high;)
        {
            mid =(low+high)/2;
            if(arr[mid]>temp)high=mid-1;
            else if(arr[mid]<temp)low=mid+1;
            else break;
        }

        if(mid==0)
        {
            if(arr[mid]<temp)cout<<mid+2<<" "<<temp-arr[mid]<<endl;
            ///else if(arr[mid]>temp)cout<<mid+1<<" "<<temp<<endl;
            else cout<<mid+1<<" "<<temp<<endl;

        }
        else
        {
           if(arr[mid]>temp)
           {
               cout<<mid+1<<" "<<temp-arr[mid-1]<<endl;
           }
           else if(arr[mid]<temp)cout<<mid+2<<" "<<temp-arr[mid]<<endl;

           else{
            cout<<mid+1<<" "<<arr[mid]-arr[mid-1]<<endl;
           }
        }

    }
}
