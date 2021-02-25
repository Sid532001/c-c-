
#include<iostream>
#include<string>
using namespace std;

void printtarget(int arr[],int idx,string set,int sos,int tar)
{
    int n;
    if(idx==arr[n])
    {
        if(sos==tar){
        cout<<set<<".";
        }
        return;
        
    }
    int c=set+to_string(arr[idx]);
    printtarget(arr,idx+1,c,sos,arr[idx],tar);
    printtarget(arr,idx+1,set,sos,tar);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    printtarget(arr,0,"",0,tar);
    printtarget(arr,0,"",0,tar);
}
