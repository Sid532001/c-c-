#include<bits/stdc++.h>
using namespace std;

int main(){
int i;
string str;
cout<<"enter the string:";
cin>>str;
for(i=0;i<str.size();i=i+2)
{
    cout<<str[i];
}
return 0;
}