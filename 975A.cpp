#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    set< set<char> >s;
    while(n--)
    {
        set<char> c;
        char arr[1005];
        scanf("%s",arr);
        getchar();
        int z = strlen(arr);
        for(int i =0 ;i<z;i++)c.insert(arr[i]);

        s.insert(c);
    }
    cout<<s.size()<<endl;




}
