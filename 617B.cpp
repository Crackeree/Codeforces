#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int s1=-1,s2=0;
    for(int i=0; i<n; i++)
        if(arr[i]==1)
        {
            s1=i;
            break;
        }
    long long sum = 1;
    if(s1==-1)sum=0;
    int i=s1+1;
    while(i<n)
    {

        for(i=s1+1 ; i<n ; i++)
        {
            if(arr[i]==1)
            {
                s2=i;
                break;
            }
        }
        if(i>=n)break;
        sum*=(long long)max(s2-s1,s1-s2);
        s1=s2;
    }

    cout<<sum<<endl;
}
