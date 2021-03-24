#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str , find_="WUB";
    cin>>str;
    int index=0;
    while(!index){
            index=str.find(find_);
        if(index==0)str.erase(index,3);
       else break;
    }
    for(int i=0;i<str.size();i++)
    {
        string temp = str.substr(i,3);
        if(temp==find_)
        {
        if(str[i-1]!=' ')str.replace(i,3," ");
        else str.replace(i,3,"");
            i=0;
        }
    }
    /*for(int i=str.size()-1;i>0;i--)
    {
        if(str[i]=='.')str[i]=0;
        else break;
    }
    */
    if(*(str.end()-1)==' ')str.erase(str.end()-1);

    cout<<str<<endl;
}
