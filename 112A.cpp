#include<iostream>
#include<string.h>
#include<stdio.h>
char* lower(char* ch)
{
    for(int i=0;ch[i];i++)
    {
        if(ch[i]>=65&&ch[i]<=90)ch[i]+=32;
    }
    return ch;
}
using namespace std;
int main()
{
    char s1[105];
    char s2[105];
    cin>>s1;
    getchar();
    cin>>s2;
    char* c1 = lower(s1);
    char* c2 = lower(s2);
    cout<<strcmp(c1,c2)<<endl;



}


