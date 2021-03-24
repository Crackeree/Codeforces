#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int x=0 ,y=0,count=0;
    bool k1=0 ,temp1=0,temp2=0, k2=0;
    for(int k =0;k<n;k++)
    {
        if(s[k]=='U')y++;
        else if(s[k]=='R') x++;

        if(x>y){k1=1;k2=0;}
        else if(x<y){k2=1;k1=0;}

        if(temp1==0 && k1==1)count++;
        else if(temp2==0 && k2==1)count++;
        else if(temp2==1 && k2==0)count++;
        else if(temp1==1 && k1==0)count++;

        temp1=k1;
        temp2=k2;


    }
    cout<<--count<<endl;

}
