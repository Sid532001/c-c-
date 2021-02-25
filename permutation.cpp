#include<bits/stdc++.h>
#include<strings.h>
using namespace std;

void permutation(string str,string perm)
{
    //base case
    if(str.size()==0)
    {
    cout<<perm<<endl;
    return;
    }
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i]; //current character
        string ros=str.substr(0,i)+str.substr(i+1);//rest of the reamining string after cutting out ch;
        permutation(ros,perm+ch);
    }
}
int main()
{
    permutation("ABC","");
} 