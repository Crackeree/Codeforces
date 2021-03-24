#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
     scanf("%d",&n);
    int arr[n];
    int i =0;
    while(n--)
    {
        scanf("%d",&arr[i++]);
    }
    n=i;
    i=0;
    while(n--)
    {
        int temp;
         scanf("%d",&temp);
        i++;
        int sum=0;
        if(temp){
        for(int j =0;j<i;j++)
        {
               if(arr[j]){
                if(arr[j]<=temp){sum+=arr[j];arr[j]=0;}
                else {sum+=temp;arr[j]-=temp;}
               }

        }
        printf("%d ",sum);
        }
    }
}
