#include<bits/stdc++.h>
#define inf 100000000000000
using namespace std;
vector<int>edge[100005],cost[100005];
vector<long long >d(100005,inf);
vector<int>parent(100005,-1);
void dijkstra(int src)
{

    priority_queue<pair<long long,int> >pq;
    pq.push(make_pair(0,src));
    d[src]=0;
    while(!pq.empty())
    {
        pair<long long,int >p = pq.top();
        pq.pop();
        int u = p.second;
        for(int i=0; i<edge[u].size(); i++)
        {
            pair<long long,int>q ;
            int v=edge[u][i];
            if(d[u]+cost[u][i]<d[v])
            {
                d[v]=d[u]+cost[u][i];
                q.first = -d[v];
                q.second = v;
                pq.push(q);
                parent[v]=u;
            }
        }
    }

}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i =0; i<m; i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        edge[a].push_back(b);
        edge[b].push_back(a);
        cost[a].push_back(w);
        cost[b].push_back(w);

    }
    int src = 1, dst=n;
    dijkstra(src);
    // for(int i=1;i<=5;i++)cout<<parent[i]<<" ";
    //cout<<endl;



    stack<int>st;
    int z = dst;


    while(z!=-1 && z!=src)
    {
        st.push(z);
        z=parent[z];
    }
    if(z==-1)
    {
        cout<<z<<endl;
        return 0;
    }
    st.push(src);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

}
