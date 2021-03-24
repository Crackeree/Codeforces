#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n , m ,i;
    cin>>n>>m;
    int arr[m];
    for(i=0;i<m;i++)cin>>arr[i];
    sort(arr,arr+m);


    int sz =m-n+1;
    //cout<<sz<<" "<<endl;
    i=0;
    int j=0,ar[sz];
    while(sz--)
    {
        j = n-1+i;
        ar[i]=arr[j]-arr[i];
        //cout<<ar[i]<<endl;
        i++;



    }
    cout<<*std::min_element(ar,ar+i)<<endl;

}
