#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,k;
    cin>>n>>m>>k;
    vector<pair<int,int> >vc,v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vc.push_back(make_pair(temp,i));
    }
    v=vc;
    sort(vc.begin(),vc.end());
    reverse(vc.begin(),vc.end());

    map<pair<int,int> , int>mp;
    long long sum=0;
    for(int i=0;i<m*k;i++)
    {
       mp[vc[i]]=1 ;
       sum+=vc[i].first;
    }
    cout<<sum<<endl;
    int count_,j=-1;
    for(int i=0;i<k-1;i++)
    {
        count_=0;
        for(++j;j<n;j++)
        {
            if(mp[v[j]]==1)count_++;
            if(count_==m)break;
        }
        cout<<j+1<<" ";


    }
}
