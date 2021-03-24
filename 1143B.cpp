#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n<10)printf("%d\n",n);
    else{
        n/=10;
        int len = log10l(n);
        int fd = n/powl(10,len);
        fd--;
        //cout<<fd<<endl;
        len++;
        n*=10;
        n--;
        int range = powl(10,len);
        fd*=range;
        range--;
        range+=fd;
        ///cout<<range<<endl;
       int max_ = -1;
       int nn ;
       while(n>=range)
       {
           int sum=1;
           nn=n;
           while(nn)
           {
               int r = nn%10;
               nn/=10;
               sum*=r;
           }
           max_ = max(max_,sum);
           n-=10;
           /*stringstream ss;
           ss<<n;
           string s;
           ss>>s;
           int sum = 1;
           for(int i=0;i<s.size();i++)
           {
               sum*=(s[i]-48);
           }
           n-=10;
           max_ = max(max_,sum);
           */

       }
       printf("%d\n",max_);
    }
}

