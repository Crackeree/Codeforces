#include<bits/stdc++.h>
using namespace std;
int main()
{


    int k;
    cin>>k;
    int a[12];
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
    }
    sort(a,a+12);
    reverse(a,a+12);
    int sum = 0,count_=0;
    for(int i=0;i<12 && sum<k;i++)
    {
        sum+=a[i];
        count_++;


    }
    if(sum>=k)
    cout<<count_<<endl;
    else cout<<-1<<endl;
}
