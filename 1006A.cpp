#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp%2==0)
        {
            cout<<temp-1<<" ";
        }
        else cout<<temp<<" ";
    }
}
