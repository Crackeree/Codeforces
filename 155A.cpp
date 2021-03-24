#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{


    ll n,temp,temp1,count_=0;
    cin>>n;
    cin>>temp;
    ll max_ = temp , min_ = temp;
    for(int i=1;i<n;i++)
    {

        cin>>temp;
        if(max_<temp)
        {
            count_++;
            max_= temp;
        }
        if(min_>temp)
        {
            count_++;
            min_ = temp;
        }

    }
    cout<<count_<<endl;
}
