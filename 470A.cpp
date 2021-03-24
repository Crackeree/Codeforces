#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int r , c;
    bool b=1;
    cin>>r>>c;
    char arr[r][c];
    int i =0;
    while(r--)
    {
        cin>>arr[i++];
    }
    r=i;
    for(int i=0;i<r;i++)
    {
        for(int j =0 ; j<c;j++)
        {
            if(i!=0 && i!=r-1 && j!=0 && j!=c-1)
            {
                if(arr[i][j]=='S')
                {
                    if(arr[i-1][j]=='W' || arr[i+1][j]=='W'){b=0;break;}
                    else if(arr[i][j-1]=='W' || arr[i][j+1]=='W'){b=0;break;}
                }
            }
            else if((i==0 || i==r-1 )&&(j!=0 && j!=c-1))
            {
                if(arr[i][j]=='S')
                {
                    if(arr[i][j-1]=='W' || arr[i][j+1]=='W'){b=0;break;}
                    else if(i && arr[i-1][j]=='W'){b=0;break;}
                    else if(i==0 && arr[i+1][j]=='W'){b=0;break;}

                }
            }
            else if((j==0 || j==c-1 )&&(i!=0 && i!=r-1))
            {
                if(arr[i][j]=='S')
                {
                    if(arr[i-1][j]=='W' || arr[i+1][j]=='W'){b=0;break;}
                    else if(j && arr[i][j-1]=='W'){b=0;break;}
                    else if(j==0 && arr[i][j+1]=='W'){b=0;break;}
                }
            }
            else{
                if(arr[0][0]=='S')
                {
                    if(arr[0][1]=='W' || arr[1][0]=='W'){b=0;break;}

                }
                else if(arr[0][c-1]=='S')
                {
                    if(arr[0][c-2]=='W' || arr[1][c-1]=='W'){b=0;break;}
                }
                else if(arr[r-1][0]=='S')
                {
                    if(arr[r-1][1]=='W' || arr[r-2][0]=='W'){b=0;break;}
                }
                else if(arr[r-1][c-1]=='S')
                {
                    if(arr[r-1][c-2]=='W' || arr[r-2][c-1]=='W'){b=0;break;}
                }
            }
        }

    }
    if(b){
            cout<<"YES\n";
    for(int i=0;i<r;i++)
    {
        for(int j =0 ; j<c;j++)
        {
           if(arr[i][j]=='.')arr[i][j]='D';
           cout<<arr[i][j];
        }
        cout<<endl;

    }

    }
    else cout<<"NO\n";
}
