#include<bits/stdc++.h>
using namespace std;
int main()
{

    int q;
    cin>>q;
    while(q--)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        if(b<=2*a)
        {
            long long d = n/2;
            long long r = n%2;
            d*=b;
            r*=a;
            d+=r;
            cout<<d<<endl;
        }
        else cout<<n*a<<endl;

    }
}
