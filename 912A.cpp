#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long A , B ,x , y, z , need,YELLOW , BLUE;
    cin>>A>>B;
    cin>>x>>y>>z;
    YELLOW=2*x+y;
    BLUE=3*z+y;
    if((YELLOW-A)<=0 && (BLUE-B)<=0)cout<<"0"<<endl;
    else if(((YELLOW-A)<=0 && (BLUE-B)>=0))cout<<BLUE-B<<endl;
    else if(((YELLOW-A)>=0 && (BLUE-B)<=0))cout<<YELLOW-A<<endl;
    else cout<<((YELLOW-A)+(BLUE-B))<<endl;

return 0;
}
