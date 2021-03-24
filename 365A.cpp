#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , i , k , l , j , c=0;
    cin>>n>>k;
    set<char>st;
    st.clear();
    char s[n][12];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        for(l=0;l<=k;l++)
        {
            char *ch = s[i];
            for(;*ch;ch++)
            {
                if(*ch-48>k)break;
                else st.insert(*ch);

            }
        }
        if(st.size==k+1 && *st.end()==k)c++;

    }
    cout<<c<<endl;

}
