#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int a1[27]={0};
    int a2[27]={0}, a3[27]={0};

    for(int i=0;i<s1.size();i++)
    {
        a1[s1[i]-65]++;
    }
    for(int i=0;i<s2.size();i++)
    {
        a2[s2[i]-65]++;
    }
    for(int i=0;i<s3.size();i++)
    {
        a3[s3[i]-65]++;
    }

    for(int i=0;i<26;i++)
    {
        if(a1[i]+a2[i]!=a3[i])
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}
