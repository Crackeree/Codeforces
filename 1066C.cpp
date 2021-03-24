#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int count_=0;
int main()
{
    int q;
    cin>>q;
    int left=0;
    int c=-1;
    while(q--)
    {
        string s ;
        int id;
        cin>>s>>id;
        if(s=="R")mp[id]=count_++;
        else if(s=="L")
        {
            //count_++;
            left++;
            mp[id]=c;
            c--;
        }
        else
        {
            //count_+=left;
            //mp[id]+=left;
            if( (mp[id]+left) *2>= (count_ + left )-1)
                cout<< count_  - mp[id] - 1<<endl;
            else cout<<mp[id]+left<<endl;
        }
    }
}

