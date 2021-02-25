#include<bits/stdc++.h>
#include<string>
using namespace std;

void permuatate_recursie(string str,string osf)
{
    if(str.size()==0)
    {
        cout<<osf<<endl;
        return;
    }
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i];
        permuatate_recursie(str.substr(0,i)+str.substr(i+1),osf+ch);
    }

}

//OPtimised Permutation using BACKTRACKING
void permutation(string str,int j)
{
    if(str.size()-1==j)
    {
        cout<<str<<endl;
        return;
    }
    for(int i=j;i<str.size();i++)
    {
        swap(str[i],str[j]);
        permutation(str,j+1);
        swap(str[i],str[j]);
    }
}

int main()
{
    permutation("abc",0);
}