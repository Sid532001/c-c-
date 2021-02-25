#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
   	int t;
   	cin>>t;
   	while(t--)
   	{
   		 int n;
   		 cin>>n;
   		 string str;
			cin>>str;
   		 sort(str.begin(),str.end());

   		 cout<<str<<endl;
   	}
}