#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    double d = (double)b/m;

    if(m<=n)
    {
        if(d<=a)
        {
            int ans=0;
            int c = n/m;
            ans += c*b;
            n%=m;
            if(n*a<=b)ans+=n*a;
            else ans+=b;

            cout<<ans<<endl;
            return 0;

        }
        else
        {
            cout<<n*a<<endl;
            return 0;
        }
    }
    else
    {
        if(n*a<=b)
        {
            cout<<n*a<<endl;
            return 0;
        }
        else
        {
            cout<<b<<endl;
            return 0;
        }
    }
}
