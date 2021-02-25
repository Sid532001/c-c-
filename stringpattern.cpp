#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    cout<<"enter the string:";
    cin.getline(str,10);
    for(int i=strlen(str);i>=0;i--)
    {
        cout<<endl;
        cout.write(str,i);

    }
}