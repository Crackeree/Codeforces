#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;

    long long max=0,min=0;

    /// min ....

    long long flr = n/m;
    long long cel = ceil((double)n/m);

    long long cel_cnt = n%m;
    long long flr_cnt = m-cel_cnt;
    long long c1=1,c2=1;
    c1 *=cel_cnt;
    if(cel%2==0)
    {

        c1*=cel/2;
        c1*=(cel-1);
    }
    else
    {
        c1*=(cel-1)/2;
        c1*=cel;
    }

    c2 *=flr_cnt;
    if(flr%2==0)
    {

        c2*=flr/2;
        c2*=(flr-1);
    }
    else
    {
        c2*=(flr-1)/2;
        c2*=flr;
    }


    min = c1 + c2;


  ///max...........
  n -= m-1;
  max=1;
  if(n%2==0)
  {
      max*=n/2;
      max*=(n-1);
  }
  else{
    max*=(n-1)/2;
    max*=n;
  }

  cout<<min<<" "<<max<<endl;

}
