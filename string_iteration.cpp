/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        
        cout<<str[i]<<endl;
    }
    return 0;
}
*/

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter your string";
    string str;
    cin>>str;
    str[0]='a'; 
    cout<<str<<endl;
    return 0;
}
*/
// Reverse a String
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string str_rev;
    for(int i=str.size()-1;i>=0;i--)
    str_rev.push_back(str[i]);
    cout<<str_rev;
}
*/

// Check if the string is palindrome
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string str_rev;
    for(int i=str.size()-1;i>=0;i--)
    {
        str_rev.push_back(str[i]);
    }
        {
            if(str==str_rev)
            {
                cout<<"yes";
            }
            else
            {
                cout<<"NO";
            }
        }
    
    return 0;
}