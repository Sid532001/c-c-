#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

cin.ignore();

while(t--){

    string s,a;
    cin>>s;

    a=s;

    for(int i=0;i<s.length();i++){

        if(s[i]=='6'){

            a[i] = '9';

        }
    }

    int p = stoi(s);
    int q = stoi(a);

    cout<<q-p<<endl;
}


return 0;
}