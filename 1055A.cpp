#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,s;
    cin>>n>>s;
    int f[n],r[n];
    for(int i=0;i<n;i++)cin>>f[i];
    for(int i=0;i<n;i++)cin>>r[i];
    if(f[0])
    {
        if(f[s-1])cout<<"YES\n";
        else
        {
            if(f[n-1])
            {
                if(r[s-1])cout<<"YES\n";
                else cout<<"NO\n";
            }
            else cout<<"NO\n";
        }
    }
    else cout<<"NO\n";


}
