#include <iostream>
using namespace std;

int main() {
    int t,n,i;
    cin>>t;
    while(t--){
        int f = 1;
        cin>>n;
        for(i=n; i>=1; i--){
            f *= i;
        }
        cout<<f<<"\n";
    }
	// your code goes here
	return 0;
}
