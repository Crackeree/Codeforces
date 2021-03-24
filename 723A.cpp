#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int min_ = INT_MAX;
    for(int i=1;i<=100;i++)
    {
        int temp = abs(i-a) + abs(i-b) + abs(i-c);
        if(min_>temp)min_=temp;
    }
    cout<<min_<<endl;
}
