#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a_,b_,c_,d_;
    char ch;
    cin>>a_>>b_>>ch>>c_>>d_;
    a_-=48;
    b_-=48;
    c_-=48;
    d_-=48;
    int a=a_;
    int b=b_;
    int c=c_;
    int d=d_;


    if(a==0)
    {
        a=b;
    }
    else{
        a = a*10+b;
    }
    if(c==0)
    {
        c=d;
    }
    else{
        c = c*10+d;
    }

    if(a>=12)a-=12;
    a*=30;
    double dd = a;
    c*=6;
    dd+= c/12.0;

    cout<<dd<<" "<<c<<endl;
}
