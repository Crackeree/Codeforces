#include<bits/stdc++.h>

using namespace std;
int main()

{
    int n,m;
    cin>>n>>m;
    bool bb[105];
    memset(bb,0,sizeof(bb));
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int j=a;j<=b;j++)bb[j]=1;



    }
    int sum = 0;
     for(int i=1;i<=m;i++)
    {
        if(bb[i]==0)sum++;
    }
    cout<<sum<<endl;
    for(int i=1;i<=m;i++)
    {
        if(bb[i]==0)cout<<i<<" ";
    }
}
