#include<bits/stdc++.h>
using namespace std;
int main()
{

    int s,n;
    cin>>s>>n;
    vector<pair<int,int> > vc;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        vc.push_back({a,b});
    }
    sort(vc.begin(),vc.end());

    for(int i=0;i<n;i++)
    {
        if(vc[i].first>=s)
        {
            cout<<"NO\n";
            return 0;
        }
        else{
            s+=vc[i].second;
        }
    }

    cout<<"YES\n";
}
