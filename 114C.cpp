#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    map<int,int>mp;

    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        mp[temp]++;

    }

    vector<int > inc,dec;
    bool b=0;
    for(auto it = mp.begin() ; it!=mp.end(); it++)
    {

        if(it->second>2)
        {
            cout<<"NO\n";
            return 0 ;
        }
        else if(it->second==2)
        {
            inc.push_back(it->first);
            dec.push_back(it->first);

        }
        else
        {
            if(b==0)
            {
                inc.push_back(it->first);
                b=1;

            }
            else
            {
                dec.push_back(it->first);
                b=0;

            }
        }
    }
    sort(inc.begin(),inc.end());
    sort(dec.begin(),dec.end());
    reverse(dec.begin(),dec.end());
    cout<<"YES\n";
    cout<<inc.size()<<endl;
    for(int i=0;i<inc.size();i++)
    {
        cout<<inc[i]<<" ";
    }
    cout<<endl;

    cout<<dec.size()<<endl;
    for(int i=0;i<dec.size();i++)
    {
        cout<<dec[i]<<" ";
    }
    cout<<endl;
    //cout<<"maal"<<endl;



}
