#include<bits/stdc++.h>
using namespace std;
int main()
{



    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    vector<int>v;
    int temp;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&temp);
        v.push_back(temp);
    }
    int c=0;
    if(x>y)
    {
        cout<<n<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    while(v.size())
    {
        v[0] = max(0,v[0]-x);
        if(v[0]==0)
        {
            v.erase(v.begin());
            c++;
            if(v.size()==0)break;
        }
        v.erase(v.begin());
        if(v.size()==0)break;


    }

    cout<<c<<endl;
}
