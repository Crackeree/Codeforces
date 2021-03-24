#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp , n ,i=0;
    int arr[100];
    cin>>n;
    while(n--)
    {
        cin>>arr[i++];
    }
    int j = 0;

    while(arr[j++]%2==0);
    if(j==1 && arr[j]%2==0 && arr[j+1]%2!=0){cout<<2<<endl;return 0;}
    else if(j==1 && arr[j]%2==0 && arr[j+1]%2==0){cout<<1<<endl;return 0;}
    int k=0;
    while(arr[k++]%2!=0);
    if(k==1 && arr[k]%2!=0 && arr[k+1]%2!=0){cout<<1<<endl;return 0;}
    else if(k==1 && arr[k]%2!=0 && arr[k+1]%2==0){cout<<2<<endl;return 0;}
    //cout<<j<<" "<<k<<endl;
    //if(j==2 || k==2)cout<<2<<endl;
    if(j==1)cout<<k<<endl;
    else if(k==1)cout<<j<<endl;

}
