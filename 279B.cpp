#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long n,m;
    cin>>n;
    vector< long long> vc;
    for(int i=0;i<n;i++)
    {
        long long temp;
        cin>>temp;
        vc.push_back(temp);
    }
    long long sum=0,max=-100,index=0;
    for(int i=vc.size()-1;i>=0;i--)
    {
        sum+=vc[i];
        if(sum<=m)
        {
            if(max<sum)
            {
                max=sum;
                index=i;
            }
        }
        else{
            index++;
            break;
        }
    }
    cout<<n-index<<endl;
}
