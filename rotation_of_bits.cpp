#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n,d;
     cin>>n>>d;
     int l=(n>>d)|(n<<d);
     cout<<l;
     return 0;
 }