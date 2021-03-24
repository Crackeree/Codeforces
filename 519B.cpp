#include<bits/stdc++.h>
using namespace std;
vector<int>vc,vc1;
int b_search(int l , int h , int e)
{
    int mid ;

    for( ; l<=h ; )
    {
        mid = (l+h)/2;
        if(vc[mid]==e)return mid;
        else if(vc[mid]<e)l=mid+1;
        else h = mid-1;

    }
    return mid;
}
int main()
{

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       int temp;
       scanf("%d",&temp);
       vc.push_back(temp);
    }
    sort(vc.begin(),vc.end());





    for(int i=0;i<n-1;i++)
    {
        int temp;
        scanf("%d",&temp);
        vc1.push_back(temp);
        int x = b_search(0,vc.size()-1,temp);
        vc.erase(vc.begin()+x);

    }
    cout<<vc[0]<<endl;
    sort(vc1.begin(),vc1.end());
    vc=vc1;
    for(int i=0;i<n-2;i++)
    {
        int temp;
        scanf("%d",&temp);

        int x = b_search(0,vc.size()-1,temp);
        vc.erase(vc.begin()+x);


    }
    cout<<vc[0]<<endl;

}
