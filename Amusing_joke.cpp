#include<bits/stdc++.h>
#include<string>

using namespace std;
int main()
{
string str1,str2,addstr,permstr;
int i;

cin>>str1;
cin>>str2;
cin>>permstr;
addstr=str1+str2;
sort(addstr.begin(),addstr.end());
sort(permstr.begin(),permstr.end());
if(addstr==permstr)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
return 0;
}