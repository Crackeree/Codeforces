#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m , s ,ss;
    vector<int>vecl,vech;

    cin>>m>>s;
    int i = 1 , sum = m ;
    ss=s;
    while(m--)
    {
        for(int j = 0 ; j<10;j++)
        {
            s-=j;
            if(s<0){cout<<"-1 -1"<<endl;return 0;}
            else if(s>m*9)s+=j;
            else if(i==1 && j==0 && sum>1){i=0;continue;}
            else {vecl.push_back(j);break;}

        }
    }
    m = sum , i= 1;
    s=ss;
    while(m--)
    {
        for(int j = 9 ; j>-1;j--)
        {
            s-=j;
            if(s<0){s+=j;vech.push_back(s);s=0;}
            else if(s>m*9)s+=j;
            else {vech.push_back(j);break;}

        }
    }
    if(0==vecl.size() && 0==vech.size())cout<<"-1 -1\n";
    else{
    for(i=0;i<sum;i++)cout<<vecl[i];
        cout<<" ";
    for(i=0;i<sum;i++)cout<<vech[i];
        cout<<endl;
    }

}
