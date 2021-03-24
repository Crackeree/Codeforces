#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str;
    int counto=0,count_=0;
    while(str=getchar())
    {
        if(str=='\n')break;
        if(str=='o')counto++;
        else if(str=='-')count_++;
    }
    if(counto)if(count_%counto)cout<<"NO\n";
              else cout<<"YES\n";

    else cout<<"YES\n";
}
