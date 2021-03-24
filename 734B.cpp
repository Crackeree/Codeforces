#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    vector<int>vc;
    vc.push_back(k2);
    vc.push_back(k5);
    vc.push_back(k6);

    sort(vc.begin(),vc.end());
    int tmp = vc[0];
    vc[0]-=tmp;
    vc[1]-=tmp;
    vc[2]-=tmp;

    long long ans =0;
    ans += (tmp*256);

    k2-=tmp;

    if(k2>=k3)
    {
        ans+=(32*k3);
    }
    else ans+=(32*k2);

    cout<<ans<<endl;


}
