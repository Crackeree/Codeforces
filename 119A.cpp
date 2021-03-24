#include<bits/stdc++.h>
using namespace std;
int main()
{


    int a,b,c;
    cin>>a>>b>>c;
    int count_=0;
    while(1)
    {
       if(count_%2==0)
       {
           c-=__gcd(c,a);
       }
       else{

        c-=__gcd(c,b);
       }
       if(c==0)
       {
           break;
       }
       count_++;
    }
    cout<<count_%2<<endl;
}
