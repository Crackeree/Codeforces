#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if(a+b>c)cout<<"No\n";
    else if((c-a-b)%2)cout<<"No\n";
    else cout<<"Yes\n";
}
