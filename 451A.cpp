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
    int i,a,b;
    for(i=1; i<n; i++)
    {
        if(arr[i-1]<arr[i]);
        else break;
    }
    b=i;
    int temp = arr[b-1];


    for(; i<n; i++)
    {
        if(arr[i-1]>arr[i]);
        else break;
    }
    a=i;
    for(int j=b-2; j>=0; j--)
    {
        if(arr[j]<arr[a-1]);
        else
        {
            cout<<"no\n";
            return 0;
        }
    }

    for(; i<n; i++)
    {
        if(arr[i-1]<arr[i] && arr[i]>temp);
        else
        {
            cout<<"no\n";
            return 0;
        }
    }

    cout<<"yes\n";
    cout<<b<<" "<<a<<endl;;
}
