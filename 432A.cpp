#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,k;
    cin>>n>>k;
    int arr[n+3];

    for(int i=0;i<n;i++)
        cin>>arr[i];


    sort(arr,arr+n);
    deque<int>dq;
    for(int i=0;i<n;i++)dq.push_back(arr[i]);
    int count_=0;
    while(!dq.empty())
    {
        int u = dq.front();
        dq.pop_front();
        int temp = k-u;
        if(temp<0)continue;
        vector<int>vc;
        vc.push_back(u);
        while(!dq.empty())
        {
            int v= dq.back();
            dq.pop_back();
            if(v+temp<=5)vc.push_back(v);
            if(vc.size()==3)
            {
                vc.clear();
                count_++;
                break;
            }

        }
    }

    cout<<count_<<endl;

}
