#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch=12;
    char chr[105];
    int u=0 , l=0 , i=0;
    while(ch!='\n')
    {
        ch=getchar();
        if(ch>=65 && ch<=90)u++;
        else if(ch>=97 && ch<=122)l++;
        chr[i++]=ch;

    }
    //cout<<l<<" "<<u<<endl;
    chr[i]='\0';
    if(l>=u)for(int i = 0; i < strlen(chr); ++i)
        chr[i] = tolower(chr[i]);

    else for(int i = 0; i < strlen(chr); ++i)
        chr[i] = toupper(chr[i]);

    cout<<chr<<endl;
}
