#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    int i=-1,j=n;
    long long max_= 0;
    long long sum1=0,sum3=0;
    while(1)
    {
       if(sum1==sum3)
       {
           max_ = max(max_,sum1);
           i++;
           j--;
           if(i>=j)break;
          sum1+=arr[i];
          sum3+=arr[j];
       }
       else if(sum1>sum3)
       {
           j--;
           if(i>=j)break;
           sum3+=arr[j];
       }
       else
       {
           i++;
           if(i>=j)break;
           sum1+=arr[i];
       }


    }

    if(sum1==sum3)max_= max(max_,sum1);



    cout<<max_<<endl;

}
