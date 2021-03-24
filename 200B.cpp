#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        sum+=(double)temp/100.0;
    }
    sum/=(double)n;
    sum*=100.0;
    cout<<sum<<endl;
}

