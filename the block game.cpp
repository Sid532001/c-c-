#include<iostream>
using namespace std;

int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n,reverse,rem=0;
		cin>>n;
		while(n!=0)
		{    
     	rem=n%10;      
     	reverse=reverse*10+rem;    
     	n/=10;    
  		}
		if(n==reverse)
		{
			cout<<"wins";
		}
		else
		{
			cout<<"loses";
		}    
	}
	return 0;
	
	
}
