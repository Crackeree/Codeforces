#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);

    int m;
    cin>>m;

    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        cout<<sum-arr[n-temp]<<endl;
    }
}
