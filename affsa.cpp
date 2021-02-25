#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double m;
	cin>>n>>m;
	if(n%5==0 && n<=m-0.50)
	{
		cout<<fixed<< setprecision(2) <<m-n-0.5;
	}
	else
	{
		cout<<fixed<<setprecision(2)<<m;
	}
	return 0;
}
