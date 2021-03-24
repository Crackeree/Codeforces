#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n ,sumx=0 , sumy=0 , sumz=0  ;
    cin>>n;
    int arr[n][3] , i , j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
            if(j==0)
            sumx +=arr[i][0];
            if(j==1)
            sumy+=arr[i][1];
            if(j==2)
            sumz+=arr[i][2];
        }
    }
    if(sumx || sumy || sumz)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}
