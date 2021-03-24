#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,k;
    cin>>b>>k;
    int sum=0;
    for(int i=0;i<k-1;i++)
    {
        int temp;
        cin>>temp;
        sum+=(b*temp)%2;
        sum%=2;
    }
    int temp;
    cin>>temp;
    sum+=temp%2;
    sum%=2;
    if(sum==0)cout<<"even\n";
    else cout<<"odd\n";

}
