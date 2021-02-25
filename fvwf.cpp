#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,n,z;
		cin>>x>>y>>n;
		int count=0;
		if((0<=z<=x && (x^z)<(y^z)))
		{
			count++;
			cout<<count;
		}
	}
	return 0;
}
