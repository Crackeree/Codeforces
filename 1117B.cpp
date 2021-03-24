#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long period = k*arr[n-1]+arr[n-2];

    long long d = m/(k+1);
    long long r = m%(k+1);
    long long ans = d*period;
    ans+=r*arr[n-1];
    cout<<ans<<endl;

}
