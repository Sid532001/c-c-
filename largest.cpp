#include<iostream>
using namespace std;
int main()
{
	int n,i ,largest=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)

		cin>>a[i];
	
		largest=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>largest)
		largest=a[i];
		
	}
	cout<<largest;
	return 0;
}

