#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        mp[temp];
    }


    map<int,int>::iterator it1 = mp.begin(),it2;
    double max_=-1;
    if(it1->first==0){
    max_=it1->first/2.0;
    }
    else  max_=it1->first;
    it1++;
    it2 = it1;

    for(it1=mp.begin(); it2!=mp.end();it1++,it2++)
    {
      double temp = it2->first - it1->first;
      if(max_*2.0<temp)max_=temp/2.0;

    }
    if(it1->first==k){
    if(max_*2<(k-it1->first))max_= (k-it1->first)/2.0;
    }
    else{
            if(max_<(k-it1->first))max_= (k-it1->first);

    }

   printf("%.10f\n",max_);


}
