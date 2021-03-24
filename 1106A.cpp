#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    char arr[555][555]={0};
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];

        }
    }
    int dx[4]={1,1,-1,-1};
    int dy[4]={-1,1,-1,1};
    if(n<3)cout<<0<<endl;
    else{

        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                if(arr[i][j]!='X')continue;
                bool b=0;
                for(int k=0;k<4;k++)
                {

                    if(arr[i+dx[k]][j+dy[k]]=='X');
                    else {b=1;break;}
                }
                if(b==0)count++;
            }
        }
        cout<<count<<endl;
    }

}
