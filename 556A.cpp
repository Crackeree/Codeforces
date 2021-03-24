#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    getchar();
    int z=0,o=0;
    for(int i=0;i<n;i++)
    {
        char c = getchar();
        if(c=='0')z++;
        else if(c=='1') o++;
    }
    if(z>=o)cout<<z-o<<endl;
    else cout<<o-z<<endl;
}
