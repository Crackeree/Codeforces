#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{

   int temp,n;
   int count=0,c=0;
   scanf("%d",&n);
   int nn=n;
   int num[n]={0};
   bool b=1;
   while(n--)
   {
       if(b)
       {
           scanf("%d",&temp);
           b=0;
       }
       else{
        int temp2;
        scanf("%d",&temp2);
        if(temp<=temp2)count++;
        else{
            num[c++]=count+1;
            count=0;
        }
            temp=temp2;
       }

   }
   num[c++]=count+1;
   sort(num,num+c);
   reverse(num,num+c);
   if(nn==1)printf("%d\n",1);
   else
   printf("%d\n",num[0]);


}



