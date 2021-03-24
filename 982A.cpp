#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>n>>str;
    int z = str.size();
    if(z==1)
    {
        if(str[0]==48)cout<<"no\n";
        else cout<<"yes\n";

        return 0;
    }
    for(int i=1;i<z;i++)
    {

       if(str[i]==49)
       {
           if(str[i-1]==str[i])
           {
               cout<<"no\n";
               return 0;
           }
       }
    }
    if(str[0]==48 && str[1]==48)
       {

        cout<<"no\n";
        return 0;
       }
    else if(str[z-1]==48 && 48==str[z-2])
    {
        cout<<"no\n";
        return 0;
    }

    if(z>=3)
    for(int i=3;i<z;i++)
    {
        if(str[i-3]==48 && str[i-2]==48 && str[i-1]==48){
            cout<<"no\n";
        return 0;
        }
    }
    cout<<"yes\n";

}
