#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r , x,y,x_,y_;
    cin>>r>>x>>y>>x_>>y_;

    double d = sqrtl((x-x_)*(x-x_) + (y-y_)*(y-y_));
    d = ceil(d);
    cout<<ceil(d/(2.0*r))<<endl;
}
