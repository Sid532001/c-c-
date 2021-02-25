#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int bs;
		float da,hra,gs;
		cin>>bs;
		if(bs<1500)
		{
			gs=bs+(0.10*bs)+(0.90*bs);
			cout<<gs<<endl;
		}
		else if(bs>=1500)
		{
			gs=bs+hra+da;
			cout<<gs<<endl;
		}
	}
	return 0;
}
