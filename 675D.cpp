#include<bits/stdc++.h>
using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;

  int temp;
  cin>>temp;

  set<int>s;
  map<int,int>left;
  map<int,int>right;
  s.insert(temp);

  for(int i =1;i<n;i++)
  {
      cin>>temp;
      int res;
      auto it  = s.upper_bound(temp);
      if(it!=s.end() && left.count(*it)==0)
      {
          left[*it]=temp;
          res  = *it;


      }
      else{
        it--;
        right[*it]=temp;
        res = *it;
      }

     cout<<res<<" ";
     s.insert(temp);
  }
  cout<<endl;







}
