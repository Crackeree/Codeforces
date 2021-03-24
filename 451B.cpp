#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>vc;
    for(int i=0; i<n; i++)
    {
        int temp;
        scanf("%d",&temp);
        vc.push_back(temp);
    }
    int i;
    for(i=1; i<n; i++)
    {
        if(vc[i-1]<=vc[i]);
        else break;
    }
    if(i==n)
    {

        if(vc[i-2]<=vc[i-1])
        {
            printf("yes\n");
            printf("%d %d\n",1,1);
            return 0;
        }
        else
        {
            printf("yes\n");
            printf("%d %d\n",i-1,i);
            return 0;
        }
    }
    int start = i-1;
    for(;i<n;i++)
    {
        if(vc[i-1]>vc[i]);
        else break;
    }
    if(i==n)
    {
        if(vc[i-2]>vc[i-1])
        {
            printf("yes\n");
            printf("%d %d\n",start+1,n);
            return 0;
        }
        else
        {
            printf("yes\n");
            printf("%d %d\n",start+1,i-1);
            return 0;
        }

    }

    int last = i-1;
    for(;i<n;i++)
    {
        if(vc[i-1]<=vc[i]);
        else
        {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    printf("%d %d\n",start+1,last+1);
    return 0;



    }
