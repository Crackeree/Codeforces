#include<stdio.h>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long long max=-100,min=1000999999;
    vector<long long>vc;
    map<long long,vector<int> >mp;
    for(int i=0;i<n;i++)
    {
        long long temp;
         scanf("%lld",&temp);
        vc.push_back(temp);
        if(temp>max)max=temp;
        if(temp<min)min=temp;
        mp[temp].push_back(i);
    }

    long long dif = max-min;
    long long mx_c = mp[max].size();
    long long mn_c = mp[min].size();
    if(max==min)printf("%lld %lld\n",dif,mx_c*(mx_c-1)/2);
    else
    printf("%lld %lld\n",dif,mx_c*mn_c);
}
