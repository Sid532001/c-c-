// ARray to BST
#include <iostream>
using namespace std;
void solve(int arr[],int l,int h)
{
    if(l>h)
    {
        return;
    }
    int mid=(l+h)/2;
    cout<<arr[mid]<<" ";
    solve(arr,l,mid-1);
    solve(arr,mid+1,h);
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solve(arr,0,n-1);
    }

	return 0;
}
