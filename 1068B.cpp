#include<iostream>
#include<map>
using namespace std;
int main()
{


    long long b,count=0,i;
    cin>>b;
    for(i=1;i*i<b;i++)
    {

        if(b%i==0)
        {
            count+=2;
        }
    }
    if(i*i==b)count++;
    cout<<count<<endl;


}
