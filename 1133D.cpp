#include<bits/stdc++.h>
using namespace std;
long double a[200009];
long  double b[200009];
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];

    }
    map<long double,int>mp;
    int extra=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0 && b[i]>0);
        else if(a[i]==0 && b[i]==0)++extra;
        else
        {
            long double d = -(long double)b[i]/a[i];

            ++mp[d];
        }
    }
    int max_ = 0;
    for(auto it = mp.begin();it!=mp.end();it++)
    {
        max_= max(max_,it->second);
    }
    cout<<max_+ extra<<endl;

}
