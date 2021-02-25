// A String is collection of characters

#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string str2;
    cin>>str2;
    string result=str+" "+str2;
    if(str==str2)
    {
        cout<<"Equal";
    }
    else
    {
        cout<<"Not Equal";
    }
    return 0;
}