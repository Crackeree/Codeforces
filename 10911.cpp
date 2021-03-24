#include<bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int> >vc;
double dp[1<<16];
double call(int x)
{
    if(x==(1<<2*n)-1) return 0;
    if(dp[x]>-0.5)return dp[x];
    int start;
    int temp = x;
    double p = 2000000000;
    for(int i=0; i<2*n; i++)
    {
        if(temp&(1<<i));
        else
        {
            start = i;
            temp|=(1<<i);
            break;
        }
    }
    for(int i=start+1; i<2*n; i++)
    {
        if(temp&(1<<i));
        else
        {
            double y = sqrtl(   (vc[start].first - vc[i].first)*(vc[start].first - vc[i].first)  +  (vc[start].second - vc[i].second)* (vc[start].second - vc[i].second));
            p= min(p,(y+call(temp|(1<<i))) );
        }
    }
    return dp[x]  = p;

}
int main()
{


    int tc=0;
    while(cin>>n)
    {
        if(n==0)break;
        string s;
        for(int i=0; i<2*n; i++)
        {
            int a,b;
            cin>>s>>a>>b;
            vc.push_back({a,b});
        }
        memset(dp,-1,sizeof dp);
        printf("Case %d: %.2f\n",++tc,call(0));
        vc.clear();

    }
}
