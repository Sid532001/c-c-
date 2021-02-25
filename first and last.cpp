#include<iostream>
using namespace std;

int main()
{
	int T;
    cin >> T;
    while(T--){
	
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++){
	
	cout<<a[0]+a[n-1]<<endl;
}
}	return 0;
}
