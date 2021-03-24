#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    map<char,int>mp;
    for(int i=0;i<str.size();i++)
    {
        mp[str[i]];
    }
    if(mp.size()<3)cout<<0<<endl;
    else if(mp.size()==3)cout<<1<<endl;
    else
    cout<<mp.size()-4<<endl;
}
