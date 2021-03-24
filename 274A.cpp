#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , c , mx=-1;
    cin>>a>>b>>c;
    int x1 = a + b*c;
    if(mx<x1)mx=x1;
    int x2= a*(b+c);
    if(mx<x2)mx=x2;
    int x3 = a*b*c;
    if(mx<x3)mx=x3;
    int x4=(a+b)*c;
    if(mx<x4)mx=x4;
    int x5 = a+b+c;
    if(mx<x5)mx=x5;
    int x6 = a*b+c;
    if(mx<x6)mx=x6;
    cout<<mx<<endl;
}
