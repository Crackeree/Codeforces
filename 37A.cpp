#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ++mp[a[i]];
    }
    int max_ = -1111;
    for(auto it = mp.begin();it!=mp.end();it++)
    {
        max_ = max(max_,it->second);
    }

    cout<<max_<<" "<<mp.size()<<endl;
}
