#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    vector<int>vc;
    int nn =n;
    while(nn--)
    {
       int temp;
       cin>>temp;
       vc.push_back(temp);
    }
    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(vc[i-1]+vc[i]<k){
                ans += (k-vc[i]-vc[i-1]);
                vc[i]+=(k-vc[i]-vc[i-1]);
        }

    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vc[i]<<" ";

    }
    cout<<endl;

}
