#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool b[1200]{0};
    stack<int>st;
    int n;
    cin>>n;
    int arr[n],i=0;
    while(n--)
    {
        cin>>arr[i];
        i++;
    }
    n=i;
    for(int i=n-1;i>=0;i--)if(b[arr[i]]==0){st.push(arr[i]);b[arr[i]]=1;}
    cout<<st.size()<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
