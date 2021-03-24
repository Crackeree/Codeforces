#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool f = 0;
    for(int i=0;i<n;i++)
    {
        if("OO"==arr[i].substr(0,2))
        {
            f=1;
            cout<<"YES\n";
            arr[i][0]='+';
            arr[i][1]='+';
            break;
        }
        else if("OO"== arr[i].substr(3,2))
        {
            f=1;
            cout<<"YES\n";
            arr[i][3]='+';
            arr[i][4]='+';
            break;
        }
    }
    if(f==0)
    {
        cout<<"NO\n";
    }
    else{

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
}
