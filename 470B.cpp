#include<iostrem>
#include<algorithm>
using namespace std;
bool arr[1000000];
void seive(void)
{
    int i=2;
    arr[i-1]=1;
    arr[i]=0;
    for(i=4;i<1000000;i+=2)
    {
        arr[i]=1;
    }
    for(int i=3;i*i<1000000;i+=2)
    {
        for(int j = i*i;j<1000000;j+=2*i)
            arr[j]=1;
    }
}
int main()
{
    seive();
    int n;
    while(1==scanf("%d",&n))
    {




    int i=3;
    int temp = -1;
    while(i<n){
        int t=2;
    while(t--)
    {



    }

    }
    }
}
