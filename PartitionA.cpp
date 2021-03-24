#include<iostream>
using namespace std;
int main()
{

    int n;

    cin>>n;
    int sum=0;
    while(n--)
    {
        int temp;
        cin>>temp;
        if (temp<0)temp*=-1;
        sum+=temp;
    }
    cout<<sum<<endl;
}
