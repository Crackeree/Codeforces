#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , s;
    cin>>n>>s;
    int arr[n],i=0;
    arr[i++]=0;
    while(n--)
    {
        int h , m;
        cin>>h>>m;
        arr[i]=h*60 + m ;
        ///cout<<arr[i]<<endl;
        i++;


    }
    int j=1;
    if(s<arr[j])arr[j-1]-=s+1;
    else
    for( j=2;j<i;j++)
    {
        if(arr[j]-arr[j-1]>2*s+1)break;
    }
    int ans = arr[j-1]+s+1;
    int r = ans%60;
    int g = ans/60;
    /*int sum=0;
    for(int i=0;i<j;i++)
    {
        sum+=arr[i];

    }
    g+=sum/60;
    */
    cout<<g<<" "<<r<<endl;

}
