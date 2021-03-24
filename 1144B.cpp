#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>even,odd;
    int cnt_odd = 0 , cnt_even =  0;
    long long sum = 0 , sum_odd = 0 , sum_even = 0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        sum+=temp;
        if(temp%2==0)
        {
            cnt_even++;
            even.push_back(temp);
            sum_even+=temp;

        }
        else{
            cnt_odd++;
            odd.push_back(temp);
            sum_odd+=temp;
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    long long ans = 0;
    if(cnt_even>=cnt_odd)
    {
       int id = cnt_even - cnt_odd - 2;
       for(int i=0;i<=id;i++)
       {
           ans+=even[i];
       }
    }
    else{
        int id = cnt_odd - cnt_even - 2;
        for(int i = 0 ; i<=id ; i++)
        {
            ans+=odd[i];
        }
    }

    cout<<ans<<endl;


}
