// /*
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int x,y;
//     cin>>x>>y;
//     if(y!=x)
//     {
//         cout<<"Yes it is opposite";
//     }
//     else
//     {
//         cout<<"No they are not opposite";
//     }
//     return 0;
// }

// */
//ANother method
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int c=((x^y)<0);
    if(c==true)
    {
        cout<<"yes signs are diffrent";
    }
    else
    {
        cout<<"No they are same";
    }
    return 0;
}