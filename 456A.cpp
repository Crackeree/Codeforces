#include<bits/stdc++.h>
using namespace std;
int main()
{



    int n;
    cin>>n;
    vector<pair<int , int> >vc;
    for(int i=0;i<n;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        vc.push_back(make_pair(temp1,temp2));

    }
    sort(vc.begin(),vc.end());
    for(int i=1;i<n;i++)
    {
        if(vc[i-1].second>vc[i].second)
        {
            cout<<"Happy Alex\n";
            return 0;

        }
    }

    cout<<"Poor Alex\n";
}
