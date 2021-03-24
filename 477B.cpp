#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,A,B;
    cin>>n>>A>>B;
    int arr[n],i=0;
    while(n--)
    {
        int temp;
        cin>>temp;
        arr[i++]=temp;
    }
    int S=A*arr[0]/B;
    sort(arr+1,arr+i);
    int count=0;
    for(int j=0;j<i;j++)
    {
        S-=arr[j];
        if(S<0)break;
        count++;
        if(S==0)break;
    }
    cout<<i-count<<endl;
}
