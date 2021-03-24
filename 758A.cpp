#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    long long a[n],max_= -10000000000000;;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        max_ = max(max_,a[i]);
    }
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=max_-a[i];
    }

    cout<<ans<<endl;

}
