#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    bool vis[300009]= {0};
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    sort(arr,arr+n);

    long long count_ = 0;
    int z=1,y=n;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<1)
        {
            for(int j=z; j<=y; j++)
            {
                if(!vis[j])
                {
                    count_+=(j-arr[i]);
                    vis[j]=1;
                    z=j+1;
                    break;
                }
            }
        }
        else if(arr[i]>=1 && arr[i]<=n)
        {
            long long m1=2222222222,m2=2222222222;
            int p,q;
            for(int j=arr[i]; j>=z; j--)
            {
                if(!vis[j])
                {
                    m1 = arr[i]-j;
                    p = j;
                    break;
                }
            }
            for(int j=arr[i]+1; j<=y; j++)
            {
                if(!vis[j])
                {
                    m2=j-arr[i];
                    q = j;
                    break;
                }
            }
            if(m1>=m2)
            {
                count_+=m2;
                vis[q]=1;
            }
            else
            {
                count_+=m1;
                vis[p]=1;
            }

        }
        else
        {
            for(int j=y; j>=z; j--)
            {
                if(!vis[j])
                {
                    count_+=(arr[i]-j);
                    vis[j]=1;
                    y=j-1;
                    break;
                }
            }

        }
    }

    printf("%I64d\n",count_);
}
