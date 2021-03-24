#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    for(int i=0;i<4;i++)
    {
        int temp;
        cin>>temp;
        ++mp[temp];

    }

    map<int,int>:: iterator it = mp.begin();
    int count_= 0;
    for( ; it!=mp.end();it++)
    {
        if(it->second == 1 );
        else count_ += (it->second-1);

    }

    cout<<count_<<endl;

}
