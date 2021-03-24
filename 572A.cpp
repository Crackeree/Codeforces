#include<bits/stdc++.h>
using namespace std;
int main()
{

    int na,nb;
    cin>>na>>nb;
    int k,m;
    cin>>k>>m;
    int arra[na+1],arrb[nb+1];
    for(int i=1;i<=na;i++)
    {
        cin>>arra[i];
    }
    for(int i=1;i<=nb;i++)
    {
        cin>>arrb[i];
        if(arrb[i]>arra[k])m--;
        if(m==0)break;
    }

    if(m==0)cout<<"YES\n";
    else cout<<"NO\n";

}
