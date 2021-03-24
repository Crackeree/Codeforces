#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='-')ans--;
        else ans++;
        if(ans<0)ans=0;
    }
    cout<<ans<<endl;
}
