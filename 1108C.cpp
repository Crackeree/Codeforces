#include<bits/stdc++.h>
using namespace std;
int main()
{



    int n;
    cin>>n;
    char str[n+10]={0};
    cin>>str;

    bool b[200]={0};
    char c = str[0];
    int count=0;
    if(strlen(str)==1)cout<<0<<"\n"<<str<<endl;
    else{
        for(int i=0;i<n;i+=3)
        {
            if(str[i]==c);
            else{
                count++;
                str[i]=c;
            }
        }
        b[c]=1;

    }
}
