#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k ,i=0;
    cin>>n>>k;
    vector<int>vc;

    while(n--)
    {
       int temp;
       cin>>temp;
       vc.push_back(temp);
       i++;
    }
    n=i;

    sort(vc.begin(),vc.end());

    if(k==n)
    {
        cout<<vc[k-1]<<endl;
    }
    else if(k==0)
    {
        if(vc[0]==1)cout<<-1<<endl;
        else cout<<vc[0]-1<<endl;
    }
    else{
        if(vc[k-1]==vc[k])cout<<-1<<endl;
        else cout<<vc[k-1]<<endl;
    }


}
