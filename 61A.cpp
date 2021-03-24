#include<bits/stdc++.h>
using namespace std;
void matching(string str1 , string str2 , int n ,string &str)
{
    if(n==-1)return ;
    matching(str1,str2,n-1,str);

    string ch = (str1[n]==str2[n])?"0":"1";
    str.append(ch);

}
int main()
{
    string str1,str2,str;
    cin>>str1>>str2;
    matching(str1,str2,str1.size()-1,str);
    cout<<str;

}
