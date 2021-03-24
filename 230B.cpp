#include<bits/stdc++.h>
using namespace std;
bool arr[1000000];
void seive(void)
{
arr[0]=1;
arr[1]=1;
arr[2]=0;
int i , j ;
for(i=4;i<=1000000;i+=2)arr[i]=1;
for(i=3;i<=1000;i+=2)
{
for(j=i*i;j<1000000;j+=2*i)arr[j]=1;
}

}
int main()
{
seive();

int t;
while(1==scanf("%d",&t)){
while(t--)
{

double n;

cin>>n;
 double f = sqrtl(n);
int x = f;
if(f - x == 0 && arr[x]==0)cout<<"YES\n";
else cout<<"NO\n";

}
}

}
