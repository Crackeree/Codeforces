#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.first==p2.first)return p1.second>p2.second;
    else return p1.first>p2.first;
}
int main()
{

    int n,k;
    cin>>n>>k;
    vector<pair<int,int> >v;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(make_pair(temp,i));
    }
    sort(v.begin(),v.end(),cmp);
    //reverse(v.begin(),v.end());
    int sum=0;
    vector<int>in;
    for(int i=0; i<k; i++)
    {
        sum+=v[i].first;
        in.push_back(v[i].second);
    }
    cout<<sum<<endl;

    sort(in.begin(),in.end());
    if(k==1)
    {
        cout<<n<<endl;
        return 0;
    }
    cout<<in[0]+1<<" ";
    int s=n;
    s-=in[0]+1;
    k--;
    for(int i=1; i<in.size()-1; i++)
    {
        cout<<in[i]-in[i-1]<<" ";
        s-=in[i]-in[i-1];
        k--;
    }
    if(k)cout<<s<<endl;
}

