#include<iostream>
using namespace std;
int arr[1000090];
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int sum=0;
    int pointer = 1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        for(int j=pointer;j<=sum;j++)
        {
            arr[j]=i;
        }
        pointer = sum+1;

    }
    int m;;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        cout<<arr[x]+1<<endl;

    }
}
