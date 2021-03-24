#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    if(s[0]=='-'){
        if(s.size()>=2)
        {
            if(s[s.size()-1]>=s[s.size()-2])
            {
                s[s.size()-1]='\n';
                if(s[1]=='0')s="0\n";
                cout<<s;
            }
            else{
                s[s.size()-2]=s[s.size()-1];
                s[s.size()-1]='\n';
                if(s[1]=='0')s="0\n";
                cout<<s;
            }
        }
        else cout<<0<<endl;
    }
    else{
        cout<<s<<endl;
    }
}
