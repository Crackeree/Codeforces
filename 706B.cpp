#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i=0;
    while(n--)
    {
        scanf("%d",&arr[i++]);
    }
    sort(arr,arr+i);
    int q;
    scanf("%d",&q);
    int temp;
    while(q--)
    {
        scanf("%d",&temp);
        int l=0,h=i-1,m=(l+h)/2;
        while(l<=h ){
        if(arr[m]==temp)l=m+1;
                m=(l+h)/2;
        for(;l<=h && arr[m]!=temp;)
        {
            m=(l+h)/2;
            if(arr[m]>temp)h=m-1;
            else if(arr[m]<temp)l=m+1;
            else{ l=m+1;break;}
        }
        }
        int j;
        for(j=m;j<i;j++)if(arr[j]>temp)break;

        printf("%d\n",j);

    }

}
