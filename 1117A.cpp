#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    double max_=-111111;
    int low,high,range=1;
    int temp=arr[0];
    low=0;
    for(int i=1;i<n;i++)
    {
       if(temp==arr[i]);
       else{
        if(max_<=temp)
        {
            if(max_==temp){
                if(range<i-low)range=i-low;
            }
            else
                range = i-low;

            max_=temp;

        }
        temp=arr[i];
        high=i;
        low=i;


       }
    }
    if(temp==arr[n-1])
    {
        if(max_<=temp)
        {

            if(max_==temp){
                    if(range<n-low)
                range = n-low;
            }
            else range = n-low;


        }

    }
    cout<<range<<endl;

}
