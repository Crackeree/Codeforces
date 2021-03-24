#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ++mp[arr[i]];
    }
    map<int,int>::iterator it = mp.begin();

    for(;it!=mp.end();it++)
    {
        if(it->second > k)
        {
            cout<<"NO\n";
            return 0;
        }
    }

    cout<<"YES\n";

    int z=1;
    int ar[n];
   for(it=mp.begin();it!=mp.end();it++)
   {

       for(int i=0;i<n;i++)
       {
          if(it->first==arr[i])
          {
              ar[i]=z;
              z++;
              if(z>k)z=1;
          }
       }

   }

   for(int i=0;i<n;i++)
   {
       cout<<ar[i]<<" ";
   }



}
