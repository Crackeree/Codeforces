#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    int arr[n];
    int c = 0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        c+=arr[i];
    }
    int max_=c;
    if(c==n){cout<<n-1<<endl;return 0;}
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int temp = c;
            for(int k=i; k<=j; k++)
            {
                if(arr[k]==1)temp--;
                else temp++;
            }
            if(max_<temp)max_=temp;
        }
    }

    cout<<max_<<endl;


}
