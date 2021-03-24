#include<bits/stdc++.h>
using namespace std;




int p[10000007];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        memset(p,0,sizeof(p));
        int n;
        cin>>n;
        //return 0;
        int max_=-111;
        for(int i=1;i<=n;i++)
        {

        int a,b;
        cin>>a>>b;
        max_=max(max_,b);
        for(int j=a;j<=b;j++)
        {
            p[j]= i;
        }

        }
        bool f[40007];
        memset(f,0,sizeof(f));
        int count_=0;
        for(int i=1;i<=max_;i++)
        {
            if(p[i]!=0)
            if(f[p[i]]==0)
            {
                f[p[i]]=1;
                count_++;
            }
        }
        cout<<count_<<endl;


    }
    return 0;
}
