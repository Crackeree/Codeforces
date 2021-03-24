#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i=1;
    cin>>n;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
               count+=2;
        }


    }
    i--;
    if(i*i==n)count--;
    count--;
    cout<<count<<endl;

}
