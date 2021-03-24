#include<bits/stdc++.h>
using namespace std;
bool arr[1000000000];
void seive(void)
{
    arr[0]=1;
    arr[1]=1;
    arr[2]=0;
    for(int i = 4 ;i<=1000000000;i+=2)arr[i]=1;
        for(int i = 3 ; i <31622;i+=2 )
    {
        for(int j = i*i;j<=1000000000;j+=2*i)arr[j]=1;
    }
}
int main()
{
    seive();
    long long int a , b ;
    while(2==scanf("%lld %lld",&a,&b)){
    double d = sqrtl(a);
    long long int z = ceil(d);
    if(b==1)cout<<"Yes\n";
    else if(a%2==0)cout<<"No\n";
    else if(arr[a]==0 && b<=z)cout<<"Yes\n";
    else cout<<"No\n";
    }



}

