#include<bits/stdc++.h>
using namespace std;






int main()
{
     int n,temp,c5=0,c0=0,i,s=0;

    scanf("%d",&n);
    if(n>=1 && n<=1000){
    while(n--)
    {
        scanf("%d",&temp);
        if(temp==5 || temp==0){
        if(temp==5)c5++;
        else c0++;
        }
        else n++;
    }
    A:if(c5*5%9!=0)
    {
        c5--;
        if(c5*5%9==0)goto B;
        goto A;
    }
    B:

        if(c0==0)cout<<-1<<endl;
        else
            if(c5==0)cout<<0<<endl;
        else{for(i=0;i<c5;i++)cout<<5;
        for(i=0;i<c0;i++)cout<<0;
        cout<<endl;
        }
    }
}




