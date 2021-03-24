#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , t ;
    cin>>n>>t;
    char s[n+1];
    cin>>s;
    while(t--)
    {
     int i = n;
     while(--i!=-1)
     {
       int j ;
    A: if( s[i]== 'G')
       {
            j = i ;
            --i;
            if(i==-1)break;
            if(s[i]=='B')
            {
                char ch = s[j];
                s[j]=s[i];
                s[i]=ch;
            }
            else
            {
               /** j = i ;
                --i;
                if(i==-1)break;
            if(s[i]=='B')
            {
                char ch = s[j];
                s[j]=s[i];
                s[i]=ch;
            }**/
            goto A ;

            }


       }
     }
    }
    cout<<s<<endl;

}
