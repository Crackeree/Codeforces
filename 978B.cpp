#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n;
    cin>>n;
    cin>>str;
    int count = 0;
    for(int i = 0 ;i<str.size();i++)
    {
        if("xxx"==str.substr(i,3))
        {
            str.replace(i,3,"xx");
            count++;
            i=-1;

        }
    }
    cout<<count<<endl;
}
