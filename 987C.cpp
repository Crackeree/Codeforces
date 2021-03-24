#include<cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ac[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ac[i]);
    }
    long long max_=1000000000000;

    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]<arr[j] && arr[j]<arr[k])
                {
                    long long temp = ac[i]+ac[j]+ac[k];
                    if(max_>temp)max_=temp;
                }
            }
        }
    }
    if(max_ == 1000000000000)printf("-1\n");
    else
    printf("%lld\n",max_);
}
