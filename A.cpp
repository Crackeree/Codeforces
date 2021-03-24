#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x,y,d;
void ee(ll a, ll b)
{
    if(b==0)
    {
        x=1;
        y=0;
        d=a;
        return;

    }

    ee(b,a%b);
    ll x1 = y;
    ll y1 = x - (a/b)*y;
    x = x1;
    y = y1;
}
int main()
{
    ll t,ans=0;
    cin>>t;
    ll cs = 1;
    while(t--)
    {
        ll A,B,C,x1,x2,y1,y2;
        cin>>A>>B>>C>>x1>>x2>>y1>>y2;
        printf("Case %lld: ",cs++);
        ll gcd = __gcd(A,B);
        if(-C%gcd)cout<<0<<endl;
        else
        {

            if(A==0 && B==0)cout<<0<<endl;
            else if(B==0)cout<<x2-x1+1<<endl;
            else if(A==0)cout<<y2-y1+1<<endl;
            else
            {

                ee(A/gcd,B/gcd);
                x*=gcd;
                y*=gcd;

                cout<<x<<" "<<y<<endl;

                ll x1_ = gcd*(x1-x)/(B);
                ll x2_ = gcd*(x2-x)/(B);


                ll y1_ = gcd*(y-y1)/(A);
                ll y2_ = gcd*(y-y2)/(A);

                x1=min(x1_,x2_);
                x2=max(x1_,x2_);
                y1=min(y1_,y2_);
                y2=max(y1_,y2_);


                if(x2<y1 || x1>y2) ans=0;
                else if(y1<=x1 && x2<=y2) ans=x2-x1+1;
                else if(x1<=y1 && y2<=x2) ans=y2-y1+1;
                else if(x1<=y1 && y1<=x2) ans=x2-y1+1;
                else if(x1<=y2 && y2<=x2) ans=x2-y2+1;
                else if(y1<=x1 && x1<=y2) ans=y2-x1+1;
                else if(y1<=x2 && x2<=y2) ans=y2-x2+1;


                cout<<ans<<endl;
            }
        }
    }


    return 0;
}
