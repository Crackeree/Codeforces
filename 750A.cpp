#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,k,count_=0;
    cin>>n>>k;
    int diff = 240-k;
    for(int i=5;i<=n*5;i+=5)
    {
        if(diff-i>=0)
        {
            count_++;
            diff-=i;
        }
    }
    cout<<count_<<endl;
}
