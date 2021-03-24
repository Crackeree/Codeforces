#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        if(a.size()>b.size())mp[a]=b;
        else mp[a]=a;
    }
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        cout<<mp[s]<<" ";
    }
    cout<<endl;
}
