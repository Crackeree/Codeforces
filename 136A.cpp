#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0,arr[n];
    while(n--)
    {
        int temp;
        cin>>temp;
        arr[temp-1]=i++;
    }
    for(int j = 0;j<i;j++)
    {
        cout<<arr[j]+1<<" ";
    }
}
