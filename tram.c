#include<stdio.h>
int main()
{
    int n;
    while(1==scanf("%d",&n))
    {
        int a[n] , b[n] , i=0 , sum = 0 , temp = -50 , m;
        while(n--)
        {
            scanf("%d %d",&a[i],&b[i]);
            m = b[i] - a[i];
            sum += m ;
            if(temp<sum)temp = sum ;





        }
        printf("%d\n",temp);
    }
    return 0;

}
