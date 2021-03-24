#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<char,int>mp;
    mp['a']=1;
    mp['e']=1;
    mp['i']=1;
    mp['o']=1;
    mp['u']=1;
    string s1,s2;
    cin>>s1>>s2;

    if(s1.size()==s2.size())
    {
        for(int i=0;i<s1.size();i++)
        {
            if(mp[s1[i]]!=mp[s2[i]])
            {
                cout<<"No\n";
                return 0;
            }

        }
        cout<<"Yes\n";
    }
    else{

        cout<<"No\n";
    }
}
