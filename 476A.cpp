#include<bits/stdc++.h>
using namespace std;
int n,m;

bool f = 0;
int ans;
int call(int x, int c)
{

    if(f==1)return ans;
    if(x<0)return 1000000000;
    if(x==0)
    {
        if(c%m==0)
        {
            f=1;
            return ans=c;
        }
        return 1000000000;
    }


    int p = call(x-2,c+1);
    if(f==1)return ans;
    int q = call(x-1,c+1);
    return min(p,q);
}
int main()
{


    cin>>n>>m;
    int ans = call(n,0);
    if(ans==1000000000)ans=-1;
    cout<<ans<<endl;
}
