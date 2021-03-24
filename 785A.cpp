#include<bits/stdc++.h>

using namespace std;
int main()
{



    int n;
    cin>>n;
    string str;
    long long ans= 0;
    while(n--)
    {
        cin>>str;
        if(str[0]=='I')
        {
            ans+=20LL;

        }
        else if(str[0]=='O')ans+=8;
        else if(str[0]=='C')ans+=6;
        else if(str[0]=='T')ans+=4;
        else if(str[0]=='D')ans+=8+4;




    }
    cout<<ans<<endl;
}
