#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    vector<long long>vc;
    vc.push_back(0);
    long long sum =0;
    for(int i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        sum+=temp;
        vc.push_back(sum);

    }
    long long min=100000000000000,start=1,last=k,index=0;
    for(int i=start,j=last;j<=n;i++,j++)
    {
        long long ans = vc[j]-vc[i-1];
        if(ans<min)
        {
            min=ans;
            index=i;
        }
    }
    printf("%d\n",index);
}
