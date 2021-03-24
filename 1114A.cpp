#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[3];
    int brr[3];

    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<3;i++)
    {
        cin>>brr[i];
    }

    if(arr[0]<=brr[0])
    {
        brr[0]-=arr[0];
        int sum=0;
        if(brr[0]+brr[1]>=arr[1])
        {
            sum+=brr[0]+brr[1];
            sum-=arr[1];
            if(sum+brr[2]>=arr[2])
            {
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
}
