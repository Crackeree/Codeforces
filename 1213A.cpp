#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define mp make_pair
LL n;
LL a[]= {111111111111111,11111111111111,1111111111111,111111111111,11111111111,1111111111,111111111,11111111,1111111,111111,11111,1111,111,11,1};
bool f=0;
LL val ,dig,ans ;
void call(LL x,LL i)
{

    if(f==1)return;
    for(int j=0; j<15; j++)
    {
        if(x+a[j]<=n)
        {
            call(x+a[j],i+15-j);
            if(f==1)return;



        }
    }
    f=1;
    val = x;
    dig = i;
    return;






}
int main()
{
    cin>>n;
    LL x = n;
    while(x)
    {
        f=0;
        call(0,0);
        ans+=dig;
        x = n-val;
        n=x;
        val = 0;
        dig = 0;
    }
    cout<<ans<<endl;

}
