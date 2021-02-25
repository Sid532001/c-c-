#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	double f;
	cin>>n>>f;
	
	
	if(n>0 && f>0 && f>n && n%5==0)
	{
		cout<<fixed<<setprecision(2)<<f-n-0.5;
	}
	else if(n>0 && f>0 && f>n && n%5!=0)
	{
		cout<<fixed<<setprecision(2)<<f;
	}
	else if(n>f)
	{
		cout<< fixed <<setprecision(2)<<f;
	}
	return 0;
	

	
}
