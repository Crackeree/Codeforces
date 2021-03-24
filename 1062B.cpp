#include<bits/stdc++.h>
using namespace std;
bool b[1000100];
vector<int>vc;
bool m(vector<int>& v)
{

    for(int i=0;i<v.size();i++)
    {
       if(v[i]%2)return 1;
    }
    return 0;

}
bool o(vector<int>& v)
{

    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=1)return 0;
    }
    return 1;
}
void seive(void)
{
    b[2]=0;
    for(int i=4;i<=1000000;i+=2)
    {
        b[i]=1;
    }
    for(int i=3;i*i<=1000000;i+=2)
    {
        if(b[i]==0)
        {
            for(int j=i*i;j<=1000000;j+=2*i)
                b[j]=1;
        }
    }
  vc.push_back(2);
    for(int i=3;i<=1000000;i+=2)if(b[i]==0)vc.push_back(i);
}
int main()
{
    seive();
   int n,nn;
   cin>>n;
   nn=n;
   int ans=1,max=-1;
   vector<int>v;
   for( int i=0;vc[i]*vc[i]<=n;i++)
   {
       int count=0;
       while(n)
       {
           if(n%vc[i]==0){
           n/=vc[i];
           count++;
           }
           else break;
       }
       if(count)
       {
            ans*=vc[i];
            v.push_back(count);

        }




}
if(n!=1){ans*=n;v.push_back(1);}
//for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
int step=0;

   while(1)
   {
       //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
       //cout<<endl;
       if(o(v))
       {
          break;
       }
       else if(m(v))
       {
           step++;
           int max = *max_element(v.begin(),v.end());
           int z = powl(2,ceil((double)log2l(max)));
           //cout<<z<<endl;
           for(int i=0;i<v.size();i++)
           {
               v[i]=z;
           }

       }
       else{
            step++;
           for(int i=0;i<v.size();i++)
           {
               v[i]/=2;
           }

       }
   }
   cout<<ans<<" "<<step<<endl;

}
