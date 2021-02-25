/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int i=0,length;
    cin.ignore();
    cin>>str;
    while(str[i]!='\0')
    {
        i++;
        length=i;
    }

    cout<<"the length of the string is:"<<length;
    return 0;
}
*/
#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"enter the string:";
    cin>>str;
    cout<<"the length of the string is "<<str.size();
}