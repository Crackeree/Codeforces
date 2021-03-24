#include<bits/stdc++.h>
using namespace std;
vector<long long >vc,e_vc,o_vc;
long long sum=0;
long long even,odd;

int main()
{

    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        long long temp;
        cin>>temp;
        vc.push_back(temp);
        if(i%2)
        {
            odd+=temp;
            o_vc.push_back(odd);
        }
        else
        {
            even+=temp;
            e_vc.push_back(even);
        }
        sum+=temp;
    }
    int count_=0;
    for(int i=0; i<n; i++)
    {

        long long tem = sum -vc[i];
        long long tem2 = tem;
        if(tem%2);
        else
        {
            long long tt;
            if( (i+1)%2 )
            {
                if(i==0)tt = even;
                else if(i>=n-1)tt = even - e_vc[(i+1)/2 - 1] +  odd;
                else
               tt = even - e_vc[(i+1)/2 - 1] +  o_vc[(i+1)/2];
            }
            else{
                if(i==1)tt = odd - o_vc[(i+1)/2 - 1];
                else if(i>=n-2)tt = odd - o_vc[(i+1)/2 - 1] + even;
                else
                tt = odd - o_vc[(i+1)/2 - 1] + e_vc[(i+1)/2];
            }
          cout<<i<<" "<<tt<<endl;
            if(2*tt==tem2)count_++;
        }
    }

    cout<<count_<<endl;

}
