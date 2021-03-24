#include<bits/stdc++.h>
using namespace std;
long long dp[205][205];
long long call(int x , int y , int c)
{

    if(x<2 && y<2)return c;
    if(x==0 || y==0)return c;
    if(dp[x][y]!=-1)return dp[x][y];
    long long p=0 ,q=0;
    if(x==1)p =  call(x+1,y-2,c+1);
    if(y==1) q = call(x-2,y+1,c+1);
    if(x>1 && y>1)
    {
        p = call(x+1,y-2,c+1);
        q = call(x-2,y+1,c+1);
    }
    return dp[x][y]=max(p,q);


}
int main()
{
    memset(dp,-1,sizeof(dp));
    call(100,100,0);

    long long n,m;
    while(cin>>n>>m){
    cout<<dp[n][m]<<endl;
    }
}
