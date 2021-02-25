#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    char str[100],source_str[50];
    int i=0,j=0;
    cout<<"enter the first string:";
    cin>>str;
    cout<<"enter the destination string:";
    cin>>source_str;
    while(str[i]!='\0')
    i++;
    while(source_str[j]!='\0');
    {
        str[i]==source_str[j];
        i++;
        j++;
    }
    source_str[i]='\0';
    cout<<"the appended string is:";
    puts(source_str);
    getch();

    return 0;

}