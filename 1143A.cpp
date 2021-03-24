#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c0=0,c1=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int tem;
        cin>>tem;
        arr[i]=tem;
        if(tem==0)c0++;
        else c1++;
    }
    int i=0;
    while(c0 && c1)
    {
        if(arr[i]==0)c0--;
        else c1--;
        i++;
    }
    cout<<i<<endl;
}
