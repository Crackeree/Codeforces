#include<bits/stdc++.h>
using namespace std;
long long update(int* arr , int n , int r,int index)
{
    int cpy[15];
    for(int i=1;i<15 ; i++)
        cpy[i]=arr[i]+n;
    cpy[index]=n;
    for(int i=index+1 ;r;i++)
    {
        if(i==15)i=0;
        else {
            cpy[i]+=1;
            r--;
        }
    }
    long long sum=0;
    for(int i=1;i<15;i++)
    {
        if(cpy[i]%2==0)sum+=cpy[i];
    }
    return sum;

}
int main()
{
    int arr[15];
    long long max_=-1;
    for(int i=1;i<15;i++)cin>>arr[i];
    for(int i=1;i<15;i++)
    {
        if(arr[i])
        {
            long long u =update(arr,arr[i]/14,arr[i]%14,i);
            ///cout<<u<<endl;
            if(max_<u)max_=u;
        }
    }
    cout<<max_<<endl;
}
