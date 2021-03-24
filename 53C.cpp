#include<bits/stdc++.h>
using namespace std;
int n;
bool b[100009];
vector<int>vc;
void call(int x,int i)
{
    if(x<=0)return;
    if(x>n)return;
    if(b[x]==1)return;
    b[x]=1;
    cout<<x<<" ";
    if(i==vc.size())return;
    call(x+vc[i],i+1);
    call(x-vc[i],i+1);
}
int main()
{



    cin>>n;
    for(int i=n-1; i>=1; i--)
    {
        vc.push_back(i);
    }
    call(1,0);

}
