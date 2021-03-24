#include<iostream>
using namespace std;
int main()
{
    int n , s , count,nn;
    cin>>n>>s;
    int ss =s;
    nn=n;
    count = 0;
    int max_ = -10;
    while(n--)
    {
        s =ss;
        int d , c ;
        cin>>d>>c;
        if(d>s)count++;
        else if(d==s && c>0)count++;
        else if(d<s || (d==s && c==0))
        {
            s-=d;
            s*=100;
            s-=c;
            s%=100;
            if(s>max_)max_=s;
        }
    }
    if(count==nn)cout<<-1<<endl;
    else cout<<max_<<endl;
}

