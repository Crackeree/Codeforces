#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin>>n;
    long long sum = 0,max_= 0;
    long long x = n;
    long long arr[n];
    arr[0]=0;
    for(int i = 1 ; i<n; i++)
    {
        long long temp;
        cin>>temp;
        sum+=temp;
        arr[i]=sum;
        if(sum>max_)
        {
            max_ = sum;
            x = n - max_;

        }
    }


    bool b[200009];
    memset(b,0,sizeof(b));
    for(int i=0; i<n; i++)
    {
        arr[i]+=x;
        if(b[arr[i]]==0 && arr[i]>=1 && arr[i]<=n)b[arr[i]]=1;
        else
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    for(int i=0; i<n; i++)
    {

        cout<<arr[i]<<" ";
    }

}
