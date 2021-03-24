#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    long long ans=0,count_=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        ans+=temp;
        if(ans<0)
        {
            count_++;
            ans=0;
        }
    }

    cout<<count_<<endl;
}
