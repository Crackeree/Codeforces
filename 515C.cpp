#include<bits/stdc++.h>
using namespace std;
int fac[10];
bool bb=0;
void call(int x,int val)
{
    if(bb==1)return;
    if(val%x)return;
    if(val==1)
    {
        bb=1;
        return;
    }
    for(int i=2;i<=9;i++)
    {
        if(!bb)
        {
            call(i,val)
        }
    }
}
int main()
{
    int sum=1;
    fac[0]=sum;
    for(int i=1;i<=9;i++)
    {
        sum*=i;
        fac[i]=sum;
    }
    int n;
    scanf("%d",&n);

    char s[19];
    scanf("%s",s);
    int val = 1;
    for(int i=0;i<n;i++)
    {
        val*=fac[s[i]-48];
    }
    call();

}
