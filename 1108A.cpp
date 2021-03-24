#include<bits/stdc++.h>
using namespace std;
int main()
{




    int q;
    cin>>q;
    while(q--)
    {
        long long l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;

        if((l1+r1)/2 == (l2+r2)/2)
        {
            cout<<max(l1,l2)<<" "<<min(r1,r2)<<endl;
        }
        else
            cout<<(l1+r1)/2<<" "<<(l2+r2)/2<<endl;
    }

}
