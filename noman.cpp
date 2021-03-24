#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
#define x first
#define y second
#define M 1000100
#define mod 1000000007

pii extendedEuclid(ll a, ll b)   // returns x, y | ax + by = gcd(a,b)
{
    if(b == 0) return pii(1, 0);
    else
    {
        pii d = extendedEuclid(b, a % b);
        return pii(d.y, d.x - d.y * (a / b));
    }
}
ll  modularInverse(ll a, ll n)
{
    pii ret = extendedEuclid(a, n);
    return ((ret.x % n) + n) % n;
}

ll bigmod(ll a, ll b, ll c)
{

    if(b==0)return 1;
    else if(b%2)
    {
        ll p = bigmod(a,b-1,c);
        return (a*p)%c;
    }
    else
    {
        ll p = bigmod(a,b/2,c);
        return (p*p)%c;
    }
}

bool marked[7500050];
ll phi[7500050];

void phi_(ll n)
{
    for(int i=1;i<=n;i++)phi[i]=i;
    phi[1] = 1;
    marked[1]=1;

    for(int i=2;i<=n;i++)
    {
        if(!marked[i])
        {

            for(int j = i ;j<=n;j+=i)
            {
                phi[j] = phi[j]/i*(i-1);
            }
        }
    }

}


//bool marked[M];
//vector<ll>prime;
//void sieve(ll n)
//{
//    for (ll i = 2; i * i <= n; i++)
//    {
//        if (marked[i] == false)   // i is a prime
//        {
//            for (ll j = i * i; j <= n; j += i)
//            {
//                marked[j] = true;
//            }
//        }
//    }
//    prime.push_back(2);
//    for(ll i = 3 ; i<=n ;i+=2)
//    {
//
//        if(!marked[i])prime.push_back(i);
//    }
//
//}

int main()
{

    phi_(7500000);


//    for(ll i = 3 ; i<=7500000;i+=2)
//    {
//        if(!marked[i])vc.push_back(i);
//    }



    ll n,m;
    cin>>n>>m;
    ll i,j,ans = 1;
    ll max_ = max(n,m);
    for(i=2;i<=min(n,m);i++)
    {
       for(j=1;j*j<i;j++)
       {
           if(i%j==0)
           {
               ll div1 = j;
               ll div2 = i/j;
               //cout<<div1<<" "<<div2<<" "<<(ll)ceil((double)(max_+1)/div1)<<" "<<(ll)ceil((double)(max_+1)/div2)<<endl;
               ans*=bigmod(div1,phi[(ll) ceil( (double) (max_)/div1) ],mod);
               ans%=mod;
               ans*=bigmod(div2,phi[(ll) ceil( (double) (max_)/div2) ],mod);
               ans%=mod;


           }
       }
       if(i==j*j)
       {
           ans*=bigmod(j,phi[(ll)ceil((double)(max_)/j)],mod);
           ans%=mod;
       }
    }

    cout<<ans<<endl;
}
