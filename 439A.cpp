#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,d;
    cin>>n>>d;
    long long sum = (n-1)*10;
    for(int i=0;i<n;i++)
    {
        long long temp;
        cin>>temp;
        sum+=temp;
    }

    if(sum>d)cout<<-1<<endl;
    else cout<<(d-sum+(n-1)*10)/5<<endl;
}
