#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    map<char,queue<int> >ma,mb;
    string a(n+1,0),b(n+1,0);
    for(int i=1; i<=n; i++)
    {
        char c;
        cin>>c;
        a[i]=c;
        ma[c].push(i);

    }
    for(int i=1; i<=n; i++)
    {
        char c;
        cin>>c;
        b[i]=c;
        mb[c].push(i);
    }
    int ans=0;
    int k1 = ma['?'].size();
    int k2 = mb['?'].size();
    int temp1 = k1, temp2 = k2;
    for(int i=97; i<=122; i++)
    {

        int r1 = ma[i].size(),r2 = mb[i].size();
        if(r1>r2)
        {
            ans+=r2;
            ans+=min(r1-r2,temp2);
            temp2-=min(r1-r2,temp2);
        }
        else
        {
            ans+=r1;
            ans+=min(r2-r1,temp1);
            temp1 -= min(r2-r1,temp1);
        }
    }
    //cout<<temp1<<" "<<temp2<<endl;
    ans+=min(temp1,temp2);


    cout<<ans<<endl;

    for(int i=1; i<=n; i++)
    {
        if(a[i]!='?')
        {
            if(mb[a[i]].size()!=0)
            {
                cout<<i<<" "<<mb[a[i]].front()<<endl;
                mb[a[i]].pop();
                ma[a[i]].pop();
            }
            else
            {

                if(mb['?'].size()!=0)
                {
                    cout<<i<<" "<<mb['?'].front()<<endl;
                    mb['?'].pop();
                    ma[a[i]].pop();
                }

            }
        }
        else
        {
            bool bb = 0;
            for(int j=97;j<=122;j++)
            {
                if(mb[j].size()>ma[j].size())
                {
                    bb=1;
                    cout<<i<<" "<<mb[j].front()<<endl;
                    mb[j].pop();
                    ma[a[i]].pop();
                    break;
                }
            }
            if(bb==0)
            {
                if(mb['?'].size()!=0)
                {
                    cout<<i<<" "<<mb['?'].front()<<endl;
                    mb['?'].pop();
                    ma[a[i]].pop();
                }
            }
        }
    }





}
