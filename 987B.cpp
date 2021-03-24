#include<bits/stdc++.h>
using namespace std;
int main()
{

    double x,y;
    cin>>x>>y;
    if(x==1)
    {
        if(x==y)cout<<"="<<endl;
        else cout<<"<"<<endl;
    }
    else
    {
        double d = y/x;
        double e =(double) log10(y)/log10(x);
        if(d==e)cout<<"="<<endl;
        else if(d<e)cout<<"<"<<endl;
        else cout<<">"<<endl;
    }

}
