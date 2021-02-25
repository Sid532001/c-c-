#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=5;i>=1;--i)
	{
		for(int j = 1; j <= i; ++j)
		{
			if(j==i)
			 cout<<"* ";
			else
			 cout<<" ";
		}
		cout<<endl;
	}
}
