#include<bits/stdc++.h>
using namespace std;
bool is_dis( string year)
{
    if(year[0] != year[1] && year[1] != year[2] && year[2]!=year[3] && year[0]!=year[3] && year[0]!=year[2] && year[1]!=year[3] )return 1;
    else return 0;

}
 string int_to_string(int num)
{
    stringstream ss;
    ss<<num;
    string str = ss.str();
    return str;
}
int main()
{
   int year;
   cin>>year;
   string str = int_to_string(++year);
   while(1!=is_dis(str))str = int_to_string(++year);
   cout<<year<<endl;



}
