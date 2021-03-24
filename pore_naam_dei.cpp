#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int size_[1005];
int a,b;
int root(int i)
{
    while(arr[i]!=i)
    {
        arr[i]=arr[arr[i]];
        i = arr[i];
    }
    return i;
}

int weighted_Union(int x, int y)
{
    int root_A = root(x);
    int root_B = root(y);
    if(size_[root_A]<size_[root_B])
    {
        arr[root_A]= arr[root_B];
        size_[root_B]+=size_[root_A];
        return size_[root_B];

    }
    else
    {
        arr[root_B]= arr[root_A];
        size_[root_A]+=size_[root_B];
        return size_[root_A];

    }
}

bool find_(int x,int y)
{
    return (root(x)==root(y));
}

int main()
{
    int n,d;
    int max_= -1111;
    scanf("%d %d",&n,&d);
    for(int i=1;i<=n;i++)
    {
        arr[i]=i;
        size_[i]=1;
    }
    while(d--)
    {

        scanf("%d %d",&a,&b);
        if(find_(a,b)==0){
        int res = weighted_Union(a,b);
        cout<<res<<endl;
         max_ = max(max_ , res);
        }

    }
    printf("%d\n",max_);




}
