#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i;
    bool b=0;
    for( i=1;i<n;i++)
    {
        if(s[i-1]!=s[i])
        {
            b=1;
            break;
        }
    }

    if(b){
    cout<<"YES"<<endl;
        cout<<s[i-1]<<s[i]<<endl;
    }
    else cout<<"NO"<<endl;
}
