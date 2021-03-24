#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    set <string> st;
    set <string> :: iterator it;

    int z = s.size();
    for(int i= 0 ;i<z-1 ; i++)
    {
        string str = s.substr(i,2);
        st.insert(str);

    }

    int count = 0 , max_ = -1;
    string m_str;

    for(it = st.begin();it!=st.end();it++)
    {
        count = 0;
        for(int i = 0 ; i<z-1 ; i++)
        {
            if(*it == s.substr(i,2))count++;
        }
        if(max_<count){
            max_=count;
            m_str = *it;
        }
    }
    cout<<m_str<<endl;
}
