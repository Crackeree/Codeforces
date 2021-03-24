#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin>>n;
    long long i,sum=0;
    for(i=1 ; i<=1000 ; i++)
    {
      long long temp =(i*(i+1))/2;
      if(sum+temp<=n)
      {
          sum+=temp;
      }
      else break;
    }
    cout<<i-1<<endl;
}
