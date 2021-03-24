#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int max=0;
    int ans=-1;
    bool b=1;
    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d",&x);
        if(b)
        {
            if(i==0)
            {
                if(x!=0)
                {
                    b=0;
                    ans=i+1;
                }
            }
            else
            {
                if( x <= (max+1) ) {if(max < x)max=x;}
                else {b=0;ans=i+1;}
            }
        }

    }
    printf("%d\n",ans);
    return 0;
}

