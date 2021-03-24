#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    bool b[40000]={0};
    vector<int>vc;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vc.push_back(temp);

    }
    sort(vc.begin(),vc.end());
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(b[vc[i]]==0)
        {
            b[vc[i]]=1;
        }
        else{
            while(b[vc[i]])
            {
                vc[i]++;
                count++;
            }
            b[vc[i]]=1;
        }
    }

    cout<<count<<endl;
}
