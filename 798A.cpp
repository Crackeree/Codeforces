#include<bits/stdc++.h>
using namespace std;
int main()
{


    string s;
    cin>>s;
    if(s.size()==1){cout<<"YES\n";return 0;}
    int i=0,j=0;
    for(i = 0 , j = s.size()-1;i<=j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            i++;j--;
            for(;i<=j;i++,j--)
            {
                if(s[i]!=s[j])
                {
                    cout<<"NO\n";
                    return 0;
                }
            }
            cout<<"YES\n";
            return 0;

        }
    }
    cout<<"YES\n";
}
