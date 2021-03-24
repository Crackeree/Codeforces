#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

#define pi acos(-1)
typedef long long ll;
int main()
{
    FastIO;

    ll n ,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0)
    {
        cout<<s<<endl;
        return 0;
    }
    if(s.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }
    ll x = 0;
    if(s[0]!='1')
    {
        s[0]='1';
        x++;
    }
    for(int i=1;i<s.size();i++)
    {
        if(x==k)break;

        if(s[i]!='0')
        {
            s[i] = '0';
            x++;
        }

    }

    cout<<s<<endl;


}
