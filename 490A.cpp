#include<bits/stdc++.h>
using namespace std;
int main()
{



    int n;
    cin>>n;
    int c1=0,c2=0,c3=0;
    vector<int>vc1,vc2,vc3;
    for(int  i = 1 ; i<=n; i++)
    {
        int temp;
        cin>>temp;
        if(temp==1)
        {
            c1++;
            vc1.push_back(i);
        }
        else if(temp==2)
        {
            c2++;
            vc2.push_back(i);
        }
        else
        {
            c3++;
            vc3.push_back(i);
        }

    }
    int ans = min(c1,min(c2,c3));

    cout<<ans<<endl;
    for(int i=0; i<ans; i++)
    {
        cout<<vc1[i]<<" "<<vc2[i]<<" "<<vc3[i]<<endl;




    }

}
