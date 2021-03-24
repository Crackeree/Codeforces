#include<bits/stdc++.h>
using namespace std;
long long arr[100005];
long long freq[100005];
long long dp[100005];
long long call(int i)
{
    if(dp[i]!=-1)return dp[i];
    if(i==0)return dp[i]=0;
    else if(i==1)return dp[i]=freq[i];
    return dp[i] = max(call(i-1), call(i-2) + freq[i]*i);
}
int main()
{

    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    long long max_=-11;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
        max_ = max(max_,arr[i]);
    }
    cout<<call(max_)<<endl;
}
