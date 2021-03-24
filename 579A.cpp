#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int count_=0;
    for(int i=1;i<=n;i*=2)
    {
        if(n&i)count_++;
    }
    cout<<count_<<endl;
}
