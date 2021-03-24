#include<iostream>
#include<vector>
using namespace std;
bool c(int temp,int k){
    int cnt=0;
    while(temp)
    {

        if(temp%2)
        {
           cnt++;
        }
        temp/=2;
    }
    if(cnt<=k)return 1;
    else return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>vc;
    for(int i=0;i<=m;i++){
        int x;
        cin>>x;
        vc.push_back(x);

    }
    int count=0;
    for(int i=0;i<m;i++){
        int temp = vc[i];
        temp^=vc[m];
        if(c(temp,k))
        {
            count++;
        }

    }
    cout<<count<<endl;

}
