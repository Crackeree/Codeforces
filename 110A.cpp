#include<bits/stdc++.h>
using namespace std;
int main()
{

    char s[20];
    cin>>s;
    int i , sz = strlen(s) , c4 = 0 , c7 = 0;
    for(i=0;i<sz;i++)
    {
        if(s[i]=='4')c4++;
        if(s[i]=='7')c7++;

    }
    if(c4+c7 == 4 || c4+c7 == 7 )cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
