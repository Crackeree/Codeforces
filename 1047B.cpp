#include<stdio.h>
#include<queue>
#include<math.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    priority_queue<int>p;
    while(n--)
    {
       int a,b;
       scanf("%d %d",&a,&b);

       int temp =(a+b);
       p.push(temp);

    }
    printf("%d",p.top());
}
