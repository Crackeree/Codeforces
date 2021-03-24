#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);



    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0,j=n/2;2*i<n;i++,j++)
    {
        if(s[i]=='L' && s[j]=='R')
        {
            cout<<i+1<<" "<<j+1<<endl;

        }
        else if(s[i]=='R' && s[j]=='L')
        {
            cout<<j+1<<" "<<i+1<<endl;

        }
        else{
            cout<<i+1<<" "<<j+1<<endl;
        }
    }


}
