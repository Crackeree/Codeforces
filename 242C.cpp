#include<bits/stdc++.h>
using namespace std;
int arrx[]= {1,-1,0,0,1,1,-1,-1};
int arry[]= {0,0,1,-1,1,-1,1,-1};
map<int,map<int,int> > vis,m;
void bfs(int x1,int y1, int x2, int y2)
{
    queue<int >q;
    q.push(x1);
    q.push(y1);
    m[x1][y1]=0;
    while(!q.empty())
    {
        int u1 = q.front();
        q.pop();
        int u2 = q.front();
        q.pop();
        int ucost = m[u1][u2];
        for(int i=0; i<8; i++)
        {
            int v1 = u1+arrx[i];
            int v2 = u2+arry[i];
            //cout<<v1<<" "<<v2<<" "<<endl;
            if(vis[v1][v2])vis[v1][v2]=0;
            else continue;
            int vcost = ucost + 1 ;
            m[v1][v2]=vcost;
            if(v1==x2 && v2==y2)
            {

                cout<<m[x2][y2]<<endl;
                return;
            }
            q.push(v1);
            q.push(v2);



        }
    }

}
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int n;
    cin>>n;
    while(n--)
    {
        int r,a,b;
        cin>>r>>a>>b;
        for(int i=a; i<=b; i++)
        {
            vis[r][i]=1;
        }
    }
    bfs(x1,y1,x2,y2);
    if(m[x2][y2]==0)cout<<-1<<endl;

}
