//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,c,N,t=0;
//	cin>>N;
//	for(int i=0;i<N;i++)
//	{
//		cin>>a>>b>>c;
//		if(a+b+c>=2)
//		{
//			c++;
//		}
//		
//	}
//	cout<<c;
//	return 0; 
//}
#include <iostream>
using namespace std;

int main()
{
    int n,p,v,t,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >> p>>v>>t;
        if (p+v+t>=2)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}
