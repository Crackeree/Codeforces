
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vc;
    vc.push_back(0);
    int max=-1;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp>max)max=temp;
        vc.push_back(temp);
    }

    vc[0]=max;
    int z = vc.size();
    while(1)
    {
        int e=0;
        for(int i=1;i<z;i++)
        {
            int temp = vc[i-1]-vc[i];
            e+=temp;
            if(e<0)break;
        }
        if(e<0)break;
        vc[0]--;
    }

    cout<<vc[0]+1<<endl;
}
