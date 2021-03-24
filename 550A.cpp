#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin>>str;
    int AB=0,BA=0;
    for(int i=0; i<str.size(); i++)
    {
        if(!AB && "AB"==str.substr(i,2))
        {
            AB++;
            i++;
        }

        else if(AB && "BA"== str.substr(i,2)){
                cout<<"YES\n";
                return 0;

        }


    }
    AB=0,BA=0;

    for(int i=0; i<str.size(); i++)
    {
        if(!BA && "BA"==str.substr(i,2))
        {
            BA++;
            i++;
        }

        else if(BA && "AB"== str.substr(i,2)){
                cout<<"YES\n";
                return 0;

        }


    }
    cout<<"NO\n";






}
