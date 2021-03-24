#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        int n= s.size();
        int m=n/3;
        int r=n%3;
        for(int i=0;i<m;i++)
        {
            cout<<"a";
        }
        for(int i=0;i<m;i++)
        {
            cout<<"A";
        }
        for(int i=0;i<m;i++)
        {
            cout<<"0";
        }
        for(int i=0;i<r;i++)
        {
            cout<<"z";
        }
        cout<<endl;



    }
}
