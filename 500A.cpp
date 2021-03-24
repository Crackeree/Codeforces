#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=1;i<n;i++)cin>>arr[i];
    int start = 1 , i=1;

    while(1)
    {
        start+=arr[i];
        i = start;

        if(start==t)
        {
            cout<<"YES\n";
            return 0;
        }
        else if(start>t)
        {
            cout<<"NO\n";
            return 0;
        }
    }

}
