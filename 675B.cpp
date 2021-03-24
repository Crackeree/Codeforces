#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    long long cnt=0;
    for(int i = 1 ; i<=n;i++)
    {
        int _d = i+a-d;
        int d_ = a+b+i-d-c;
        int a_ = i + b - c;
        if(_d>=1 && _d<= n)
        {
            if(d_>=1 && d_<= n)
            {
                if(a_>=1 && a_<= n)
                {
                    //cout<<i<<endl;
                    cnt++;
                }
            }
        }


    }
    cout<<cnt*n<<endl;
}

