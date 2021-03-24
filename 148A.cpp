#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{

    int a,b,c,d,e,count=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    for(int i=1;i<=e;i++)
    {
        if(i%a==0)count++;
        else if(i%b==0)count++;
        else if(i%c==0)count++;
        else if(i%d==0)count++;
    }
    printf("%d\n",count);

}
