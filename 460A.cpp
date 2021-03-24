#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    if(n==m)cout<<n+1<<endl;
    else if(n<m)cout<<n<<endl;
    else
    {
        int ans=n,tem=m;
        while(ans/tem)
        {
            int r = ans/tem;
            ans+=r;
            tem+=m*r;

        }

        cout<<ans<<endl;
    }
}
