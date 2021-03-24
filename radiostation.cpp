#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr1[1005][30] , arr2[1005][30],arr3[1005][30],arr4[1005][30];
    int n , m , i=0 , j=0;
    cin>>n>>m;
        char ch = getchar();
    while(n--)
    {

        scanf("%s",arr1[i]);

        //getchar();

        scanf("%s",arr2[i]);
        int sz = strlen(arr2[i]);
         arr2[i][sz]=';';
         arr2[i][++sz]='\0';
         i++;
    }
    n=i;
    //i=0;
    /*while(n--)
    {
        cout<<arr1[i]<<" "<<arr2[i]<<" "<<i<<endl;
        i++;
    }*/
    //getchar();
    while(m--)
    {


        scanf("%s",arr3[j]);
        //getchar();
       // cout<<arr3[j]<<j<<endl;

        scanf("%s",arr4[j++]);
       // cout<<j<<arr4[j++]<<endl;

    }
    m=j;
    j=0;
    /* while(m--)
    {
        cout<<arr3[j]<<" "<<arr4[j]<<" "<<j<<endl;
        j++;
    }*/

n=i;
m=j;

int k = 0 , l=0;
for(;k<n;k++)
{
    for(l=0;l<m;l++)
    {
        if(arr2[k]==arr4[l])cout<<arr3[l]<<" "<<arr4[l]<<" #"<<arr1[k]<<endl;
    }
}








}
