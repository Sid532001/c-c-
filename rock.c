#include <iostream>
#include<string>
using namespace std;

int main() {
	//code
	int tc;
	cin>>tc;
	string s;
	for(int i=0;i<tc;i++){
	    cin>>s; 
	    //cout<<s[0]<<endl;
	    if(s[0]==s[1])cout<<"DRAW"<<endl;
	    else if((s[0]=='R' && s[1]=='S') || (s[0]=='S' && s[1]=='P') || (s[0]=='P' && s[1]=='R'))cout<<"A"<<endl;
	    else cout<<"B"<<endl;
	}
	return 0;
} 