#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,pair<int,string> >mp;
    mp["purple"]=make_pair(0,"Power");
    mp["green"]=make_pair(0,"Time");
    mp["blue"]=make_pair(0,"Space");
    mp["orange"]=make_pair(0,"Soul");
    mp["red"]=make_pair(0,"Reality");
    mp["yellow"]=make_pair(0,"Mind");
    int n;
    cin>>n;
    int k = 6-n;
    while(n--)
    {
        string temp;
        cin>>temp;
        mp[temp].first=1;

    }
    map<string,pair<int,string> >:: iterator it;
    cout<<k<<endl;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if((it->second).first==0)cout<<(it->second).second<<endl;
    }

}
