#include<bits/stdc++.h>
using namespace std;
int n;
int arr[20];
int call(int lo, int hi)
{
    for(int i=lo;i<hi;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int mid = (lo+hi)>>1;
             int p1 = call(lo,mid);
             int p2 = call(mid+1,hi);
             return max(p1,p2);
             break;
        }
    }
    return hi-lo+1;



}
int main()
{


    cin>>n;

    for(int i =0 ; i <n;i++)
    {
        cin>>arr[i];
    }
    cout<<call(0,n-1);

}
