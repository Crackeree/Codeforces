#include<bits/stdc++.h>
using namespace std;
char str1[15];
char str2[15];
int len;
int c;
int k;

void call(int x,int sum)
{
    if(x==len)
    {
        if(sum==c)k++;
        return;
    }
    if(str2[x]=='+')
    {
        sum++;
        call(x+1,sum);
    }
    else if(str2[x]=='-')
    {
        sum--;
        call(x+1,sum);
    }
    else
    {
        call(x+1,sum+1);
        call(x+1,sum-1);
    }
}
int main()
{

    scanf("%s",str1);
    len = strlen(str1);
    for(int i=0; i<len; i++)
        if(str1[i]=='+')c++;
        else c--;

    scanf("%s",str2);

    call(0,0);
    int p=0;
    for(int i=0;i<len;i++)
    {
        if(str2[i]=='?')p++;
    }
    double d =(double) k/powl(2,p);
    printf("%.12f\n",d);

}


