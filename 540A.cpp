#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int temp = abs(a[i]-b[i]);

        //cout<<temp<<endl;
        if(temp>5)temp = 9-temp+1;

        ans+=temp;

    }

    cout<<ans<<endl;
}
