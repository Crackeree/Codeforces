#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define mp make_pair
LL h[100005];
vector<pair<LL,LL>>v;

int main()
{
    LL t,cs=0,n,m,i,j,k,x,y,r,ans=0,mn,a,b,l,s,flag;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>h[i];
        v.push_back(mp(h[i],i));
    }
    h[n+1]=2147483648;
    v.push_back(mp(h[i],i));

    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }



    sort(v.begin(),v.end());

    for(int i=1; i<=n; i++)
    {

        LL lo = 0, hi = v.size()-1, mid = (lo+hi)/2;
        for( ; lo<=hi ; )
        {
            mid = (lo+hi)/2;
            if(v[mid].first == h[i])
            {
                break;
            }
            else if(v[mid].first > h[i])
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
//        cout<<mid<<" ";
        LL range  = min(h[i] + i, n);
        for(j=mid;j<v.size();j++) {
            if(v[j].first == h[i]);
            else {
                mid=j;
                break;
            }
        }
        flag=1;
        mn = 2147483648;
        for(LL j = mid ; j<v.size() ; j++)
        {
            if(v[j].second<=range && v[j].second>i)
            {
//                cout<<v[j].second-i-1<<" ";
                mn=min(mn,v[j].second);
//                flag=0;
//                break;
            }
        }
        if(mn==2147483648) {
            cout<<range - i<<" ";
        }
        else {
            cout<<mn-i-1<<" ";
        }

    }



    cout<<endl;



    return 0;
}
