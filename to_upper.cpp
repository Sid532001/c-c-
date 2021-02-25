#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i=0;
    cout<<"enter the string:";
    cin>>str;
    char str2[100];
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str2[i]=str[i]-32;
        }
        else
        {
            str2[i]=str[i];
            i++;
        }

    }
    str2[i]='\0';
    cout<<str2[i];
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     cin>>str;
//     cout<<str.toLower();
//     return 0;
// }