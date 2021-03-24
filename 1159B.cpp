#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    long long min_ = 2000000000000;
    for(int i=1; i<=n; i++)
    {


        long long temp;
        cin>>temp;

        min_ = min(min_ , temp/max(i-1,n-i));

    }

    cout<<min_<<endl;








}
