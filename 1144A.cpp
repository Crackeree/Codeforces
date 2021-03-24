#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;

        bool b = 0;
        map<int,int>mp;
        for(int i=0;i<s.size();i++)
        {
            ++mp[s[i]];
        }
        int temp = mp.begin()->first - 1;
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            if(it->second==1 && (it->first-temp)==1)
            {
                temp = it->first;
            }
            else{
                b=1;
                break;
            }
        }
        if(b==1)cout<<"No\n";
        else cout<<"Yes\n";


    }
}
