/*A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once.*/
#include<bits/stdc++.h>
#include<string>

using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    transform(str.begin(), 
              str.end(), 
              str.begin(), 
              ::toupper); 
    sort(str.begin(),str.end());
    for(i=0;i<n;i++)
    {
        if(str[i]!=str[i+1])
        {
            count++;
            
        }
    }
    if(count==25)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
        
    }
    return 0;
}