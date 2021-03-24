#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int p25 = 0,p50=0;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        if(temp==25)p25++;
        else if(temp==50)
        {
            p50++;
            if(p25>0)
            {
                p25--;
            }
            else
            {
                cout<<"NO\n";
                return 0;
            }
        }
        else{
            if(p50>0)
            {
                if(p25>0)
                {
                    p50--;
                    p25--;
                }
                else{
                    cout<<"NO\n";
                    return 0;
                }
            }
            else{
                if(p25>2)p25-=3;
                else
                {
                    cout<<"NO\n";
                    return 0;
                }
            }
        }

    }

    cout<<"YES\n";
    return 0;
}

