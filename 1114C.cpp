#include<bits/stdc++.h>
#define M 1000200
using namespace std;
bool vis[M+50];
vector<long long>prime;
void seive(void)
{
    vis[0]=1;
    vis[1]=1;
    vis[2]=0;

    for(long long i=4; i<=M; i+=2)vis[i]=1;

    for(long long  i=3; i*i<=M; i+=2)
    {
        if(vis[i]==0)
        {
            for(long long j=i*i; j<=M; j+=2*i)
            {
                vis[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(long long i=3; i<=M; i+=2)if(vis[i]==0)prime.push_back(i);
}

long long call(long long n, long long store)
{
    long long ans=0;
    while(n!=0)
    {
        n/=store;
        ans+= n;
        //cout<<ans<<endl;

    }
    return ans;
}
int main()
{
    seive();

    long long n,b;
    cin>>n>>b;
    long long max_=-1111111111111;
    long long min_ = 10000000000000000000;
    long long store=1;
    for(int i=0; prime[i]*prime[i]<=b; i++)
    {


        long long count_=0;
        while(b%prime[i]==0)
        {
            b/=prime[i];
            count_++;
        }
        if(count_!=0){
        long long ans = call(n,prime[i]);
        min_ = min(ans/count_,min_);
        }



    }
    if(b>1)
    {
        long long ans = call(n,b);
        min_ = min(ans,min_);

    }


    //cout<<n<<" "<<store<<endl;

    //cout<<max_<<" "<<min_<<" "<<store<<endl;

    cout<<min_<<endl;
}
