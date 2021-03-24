#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    long long ans=0;
    for(int i=0,j=n-1;i<n;i++,j--)
    {
       ans+= (arr[i]*arr[j])%10007 ;
       ans%=10007;
    }
    cout<<ans<<endl;
}
