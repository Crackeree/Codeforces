#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp==1)c1++;
        else if(temp==2)c2++;
        else c3++;
    }
    int ans = c1+c2+c3;
    cout<<ans-max(c1,max(c2,c3))<<endl;

}
