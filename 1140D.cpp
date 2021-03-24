#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin>>n;
    long long sum = 0;
    for(long long i=2 , j = 3 ; j<=n;i++, j++)
    {
        long long temp = i*j;
        sum+=temp;

    }
    cout<<sum<<endl;
}
