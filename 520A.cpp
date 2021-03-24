#include<bits/stdc++.h>>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string str;
    cin>>str;
    int arr[30];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            arr[str[i]-'A']=1;
        }
        else{
            arr[str[i]-'a']=1;
        }
    }

    for(int i=0;i<26;i++)if(!arr[i])
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES\n";
}
