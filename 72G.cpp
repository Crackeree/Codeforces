#include<bits/stdc++.h>
using namespace std;
int dp[25];
int fib(int n)
{
    if(n==0)return dp[0]=1;
    if(n==1)return dp[1]=1;
    if(dp[n]!=-1)return dp[n];

    return dp[n] = fib(n-2) + fib(n-1);


}
int main()
{

    memset(dp,-1,sizeof(dp));
    fib(21);
    int n;
    while(cin>>n)
    {
        cout<<dp[n]<<endl;
    }


}
