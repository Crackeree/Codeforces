#include<bits/stdc++.h>
using namespace std;

vector<int>vc;
map< int ,int>mp;
int max_ = -1111;
int n,num = 0;
int id=0;
bool b[200009];
int index[200009];

void call(int i , int j)
{

    if(i<0)return;
    if(i>=n)return;
    if(b[i]==1)return;

    if(vc[i]==num)
    {


       b[i]=1;
       call(i-1,i);
       call(i+1,i);
       return;
    }
    else if(vc[i]<num)
    {

        b[i]=1;
        vc[i]=num;
        cout<<1<<" "<<i+1<<" "<<j+1<<endl;
        call(i-1,i);
        call(i+1,i);
        return;

    }
    else if(vc[i]>num){


        b[i]=1;
        vc[i]=num;
        cout<<2<<" "<<i+1<<" "<<j+1<<endl;
        call(i-1,i);
        call(i+1,i);
        return;
    }

}


int main()
{
    ios_base::  sync_with_stdio(false);
    cin.tie();


    cin>>n;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vc.push_back(temp);
        mp[temp]++;
        index[temp]=i;
    }

    for(auto it = mp.begin();it!=mp.end();it++)
    {
        if(max_<it->second)
        {
            max_ = it->second;
            num = it->first;


        }
    }

    cout<<n-max_<<endl;
    id = index[num];
    call(id,id);

    return 0;
}
