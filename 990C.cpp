#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    vector<int>vc;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        vc.push_back(temp);
    }
    sort(vc.begin(),vc.end());
    //reverse(vc.begin(),vc.end());
    for(int i=0; i<vc.size()-1; i++)
    {
        for(int j=1+i; j<vc.size(); j++)
        {
            if(vc[i]<vc[j])
            {
                if(vc[j]-vc[i]<=k)
                {

                    vc.erase(vc.begin()+i);
                    j=i;

                }
                else break;
            }


            for(int k=0; k<vc.size(); k++)cout<<vc[k]<<" ";
            cout<<endl;
        }
    }
    cout<<vc.size()<<endl;

}

