#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int p=0,z=0,np=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp>0)p++;
        else if(temp==0)z++;
        else np++;
    }
    int k = ceil((double) n/2.0);
    if( p>=k)cout<<10<<endl;
    else if(np>=k)cout<<-10<<endl;
    else cout<<0<<endl;
}
