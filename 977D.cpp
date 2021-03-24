
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    map<unsigned long long,int>mp;
    map<unsigned long long,int>:: iterator it;
    while(n--)
    {
        unsigned long long temp ;
        cin>>temp;

        ++mp[temp];
        i++;
    }
    n=i;

    vector<pair<unsigned long long , unsigned long long> > vc;

    for(it=mp.begin();it!=mp.end();it++)
    {
        unsigned long long  temp_two = it->first;
        temp_two*=2;



        if(mp[temp_two])
        {
            pair<unsigned long long , unsigned long long>p;
            p.first = it->first;
            ///cout<<p.first<<" ";
            p.second = temp_two;
           /// cout<<p.second<<endl;
            vc.push_back(p);

        }
        else mp.erase(temp_two);
        unsigned long  long t = it->first;
        if(t%3==0){
        unsigned long long  temp_three = t/3;
        if(mp[temp_three])
        {
            pair<unsigned long long , unsigned long long>p;
            p.first = t;
            ///cout<<p.first<<" ";
            p.second = temp_three;
            ///cout<<p.second<<endl;
            vc.push_back(p);

        }
        else mp.erase(temp_three);
        }

    }



    deque<unsigned long long>deq;
    deq.push_back(vc[0].first);
    deq.push_back(vc[0].second);
    vc.erase(vc.begin());
    for( ; vc.size() ; )
    {
        unsigned long long temp1 = deq.front();
        unsigned long long temp2 = deq.back();
        for(int j=0;j<vc.size();j++)
        {
            if(vc[j].first == temp2)
            {
                deq.push_back(vc[j].second);
                vc.erase(vc.begin()+j);
                break;
            }
            else if(vc[j].second == temp1)
            {
                deq.push_front(vc[j].first);
                vc.erase(vc.begin()+j);
                break;
            }
        }
        ///cout<<vc[0].first<<" "<<vc[0].second<<endl;
    }

    deque<unsigned long long>:: iterator itt;
    for(itt = deq.begin();itt!=deq.end();++itt)cout<<*itt<<" ";






}
