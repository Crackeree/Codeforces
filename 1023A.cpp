#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    string s1,s2,s3,s4;
    cin>>s1>>s2;
    if(n-m>1){cout<<"NO\n";return 0;}
    if(s1==s2){cout<<"YES\n";return 0;}
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='*')
        {
             s3 = s1.substr(0,i);
             s4 = s1.substr(i+1,n-i-1);
             //cout<<s3<<" "<<s4<<endl;

            break;
        }
        if(i==n-1){cout<<"NO\n";return 0;}

    }
    for(int i=0;i<s3.size();i++)
    {
        if(s2[i]==s3[i]);
        else
        {

            cout<<"NO\n";
            return 0;
        }
    }
    int sz = s2.size()-1;
    for(int i=s4.size()-1;i>=0;i--)
    {
        if(s4[i]==s2[sz--]);
        else
        {

            cout<<"NO\n";
            return 0;
        }
    }

    cout<<"YES\n";

}
