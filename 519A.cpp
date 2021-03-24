#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
    mp['Q']=9;
    mp['R']=5;
    mp['B']=3;
    mp['N']=3;
    mp['P']=1;
    string str;
    long long sum_A=0,sum_B=0;
    for(int i=0;i<8;i++)
    {
        cin>>str;
        for(int i=0;i<8;i++){

            if(str[i]=='Q')sum_A+=mp['Q'];
            else if(str[i]=='q')sum_B+=mp['Q'];
            else if(str[i]=='R')sum_A+=mp['R'];
            else if(str[i]=='r')sum_B+=mp['R'];
            else if(str[i]=='B')sum_A+=mp['B'];
            else if(str[i]=='b')sum_B+=mp['B'];
            else if(str[i]=='N')sum_A+=mp['N'];
            else if(str[i]=='n')sum_B+=mp['N'];
            else if(str[i]=='P')sum_A+=mp['P'];
            else if(str[i]=='p')sum_B+=mp['P'];
        }
    }
    if(sum_A>sum_B)cout<<"White\n";
    else if(sum_A<sum_B)cout<<"Black\n";
    else cout<<"Draw\n";
}
