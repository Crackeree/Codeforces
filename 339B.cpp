#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,m;
    cin>>n>>m;
    int start=1;
    long long ans=0;
    for(int i=0;i<m;i++)
    {


        int end;
        cin>>end;
        if(end-start>=0)
        {
            ans+=(end-start);
        }
        else{
            ans+=(end-start)+n;
        }
        swap(start,end);
    }

    cout<<ans<<endl;

}
