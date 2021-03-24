#include<iostream>
#include<cstdio>
#include<math.h>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int n , m ,k;
    scanf("%d %d %d",&n,&m,&k);
    map<int , int> mp;
    int amm[m];
    int i =0;
    while(m--)
    {
        scanf("%d",&amm[i]);
        ++mp[amm[i]];
        i++;
    }
    int now = 1 ;
    bool b = 0;
    while(k--)
    {
        int temp1 , temp2;
        scanf("%d %d",&temp1 , &temp2);
        if(b==0){
        if(mp[now]==1){b=1;continue;}
        if(now==temp1)
        {
            now= temp2;
        }
        else if(now==temp2)
        {
            now = temp1;
        }
        }
    }
    printf("%d\n",now);





}


