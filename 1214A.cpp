#include<bits/stdc++.h>
typedef  long long ll;
using namespace std;
int main()
{
    int n;
    cin>>n;



    stack<ll>st;
    bool f = 0, b=0;
    ll loop = 0,for_ = 1,end_ = 0,ans=0;
    while(n--)
    {
        if(ans<0 || ans >= (1LL<<32))f=1;
        string s;
        cin>>s;
        if(s=="add")
        {
            if(loop == 0)ans++;
            else
            {
                if(b==1)f=1;
                ans+=for_;
            }
        }
        else if(s=="for")
        {
            ll num;
            cin>>num;
            for_*=num;
            if(for_>= (1LL<<32))b=1;
            loop++;
            st.push(num);
        }
        else
        {
            ll val = st.top();
            st.pop();
            loop--;
            for_/=val;
            if(for_>= (1LL<<32))b=1;
            else b=0;
        }
    }

    if(f==0)
    cout<<ans<<endl;
    else cout<<"OVERFLOW!!!"<<endl;
}
