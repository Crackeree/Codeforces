#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    char ch;
    int m=n;
    while(m--)
    {
        cin>>ch;
        if(ch=='A')count++;
    }
    if(2*count==n)
    cout<<"Friendship\n"<<endl;
    else if(count>n-count) cout<<"Anton\n"<<endl;
    else  cout<<"Danik\n"<<endl;
}

