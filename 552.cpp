#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin>>n;
    long long  i;
    long long sum=0,nine=9,count=1;
    for(i=9;i<n;i=i*10+9){sum+=(count*nine);nine*=10;count++;}



    long long len = log10l(i);
    long long start = powl(10,len);
    long long c = n-start + 1;
    sum += (c*(len+1));
    cout<<sum<<endl;





}
