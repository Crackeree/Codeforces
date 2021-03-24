#include<bits/stdc++.h>
using namespace std;
int main()
{



    int n;
    cin>>n;
    long long i,sum = 0;
    for( i=5 ; sum<n ; i*=2)
    {
        sum+=i;

    }
    i/=2;
    sum-=i;
    long long f = i/5;
    n-=sum;
    cout<<ceil((double) n/f)<<endl;



}
