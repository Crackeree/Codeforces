#include<stdio.h>
using namespace std;
int main()
{
    int n;

    scanf("%d",&n);

    int arr[n+5];
    int index[200009];
    bool b[n+5]={0};
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        index[arr[i]]=i;
        b[i]=1;

    }
    int top = 1,start=1;
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(b[index[a]]){
        printf("%d ",index[a]-top+1);
        top = index[a]+1;
        for(int j =start;j<top;j++)b[j]=0;
        start = top;
        }
        else printf("0 ");



    }
}
