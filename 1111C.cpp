#include<bits/stdc++.h>
using namespace std;
long long n,k,A,B;
long long arr[100009];

long long call(long long l,long long h)
{

    long long tmp=0;
    for(int i=0;i<k;i++)
    {
        if(arr[i]>h)break;
        if(arr[i]>=l && arr[i]<=h)tmp++;
    }

    if(tmp==0)return A;
    if(l==h)
    {

        return B;
    }

    long long mid = (l+h)/2;
    long long m=B*tmp*(h-l+1);
    return min(m , call(l,mid) + call(mid+1,h) );
}

int main()
{

    scanf("%lld %lld %lld %lld",&n,&k,&A,&B);
    for(int i=0;i<k;i++)scanf("%lld",&arr[i]);
    sort(arr,arr+n);
    printf("%lld\n",call(1,1LL<<n));


}
