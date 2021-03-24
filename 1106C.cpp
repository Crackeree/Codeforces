#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    long long count=0;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp = arr[i]+arr[j];
        count+=temp*temp;
    }
    printf("%lld\n",count);
}
