#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,r;
    cin>>k>>r;
    if(k%10LL==0)
    {
        cout<<1<<endl;
        return 0;
    }
    if(k==r)
    {
        cout<<1<<endl;
        return 0;
    }
    long long i,ans,ans2=1000000000000000;
    if(r%k==0)
    {
        ans2 = r/k;
    }
    for(i=1;; i++)
    {
        ans = i*10LL + r;
        if(ans>k*10LL)
        {
            ans=10LL;
            break;
        }
        if(ans%k==0)
        {
            ans/=k;
            break;

        }
    }
    cout<<min(ans2,min(10LL/__gcd(10LL,k),ans))<<endl;


}
