#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long n,k;
    cin>>n>>k;
    long long count_=0;
    for(long long i=1;i<=n;i++)
    {
        if(k%i==0)
        {
            if(k<=n*i)count_++;
        }
    }

    cout<<count_<<endl;
}
