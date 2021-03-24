#include<bits/stdc++.h>
using namespace std;
bool is_that_all(int n, bool* a)
{
    if(n==0)return 1;
    if(a[n]) return is_that_all(n-1,a);
    else return 0;
}
int main()
{
    int n;
    cin>>n;
    bool arr[n+5]{0};
    int p;
    cin>>p;
    while(p--)
    {
        int temp;
        cin>>temp;
        arr[temp]=1;
    }

    int q;
    cin>>q;
    while(q--)
    {
        int temp;
        cin>>temp;
        arr[temp]=1;
    }
    bool b = is_that_all(n,arr);
    if(b)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

}
