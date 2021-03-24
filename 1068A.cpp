#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,M,K,L,ans;
    cin>>N>>M>>K>>L;
    if(N>=M)
    {
        ans = N/M;

        if(N-K>=M*ans)
        {
           if(M*ans>=L);
           else cout<<-1<<endl;
        }
        else
        {
            K = M*ans - (N-K);
            if(M*ans>=L+K);
            else cout<<-1<<endl;
        }

    }
    else {cout<<-1<<endl;return 0;}
     while(1)
     {
         if(N-K>=M*ans)
        {
           if(M*ans>=L);
           else break;
        }
        else
        {
            K = M*ans - (N-K);
            if(M*ans>=L+K);
            else break;
        }
        ans--;
     }
     cout<<ans+1<<endl;

}
