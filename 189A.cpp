#include<bits/stdc++.h>
using namespace std;
int arr[3];
int dp[4][4003];
int call(int i, int n, int c)
{
    if(n==0)return dp[i][n]=c;
    if(i==3 || n<0)return 0;
    if(dp[i][n]!=-1)return dp[i][n];

    int m1 = call(i,n-arr[i],c+1);
    int m2 = call(i+1,n,c);

    return dp[i][n]=max(m1,m2);

}
int main()
{

    int n;
    memset(dp,-1,sizeof(dp));
    cin>>n>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cout<<call(0,n,0);


}
