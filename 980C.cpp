#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,k;
    cin>>n>>k;
    bool b[n]{0};
    int temp,pos=0;
    int arr[n],max_=-1;
    while(n--)
    {
        cin>>temp;
        arr[pos++]=temp;
        if(max_<temp)max_=temp;
    }
    n=pos;
    int in = 0;
    int la = k-1;
    for(int i=0;i<=max_+k;i+=k)
    {

       for(int j=0;j<n;j++)
       {
           if(b[j]==0)if(arr[j]>= i && arr[j]<= (k-1+i)){arr[j]=i;b[j]=1;}
       }

    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
