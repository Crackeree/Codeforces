#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
A:cin>>s;

int i=0;
for(;i<s.size();i++)
{
if(s[i]>=33 && s[i]<=126){
if(s[i]=='H'||s[i]=='Q'||s[i]=='9'||s[i]=='+')
{
    cout<<"YES";
    break;
}
}
else goto A;
}
if(i==s.size()) cout<<"NO";
}

