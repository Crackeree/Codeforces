#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max=-20;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(max<arr[i])max=arr[i];
    }

    int b=max;

    for(int i=1; i<=max; i++)
    {
        if(max%i==0)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[j]==i)
                {
                    arr[j]=-1;
                    break;
                }
            }
        }
    }
    sort(arr,arr+n);
    int a = arr[n-1];
    cout<<a<<" "<<endl;

}
