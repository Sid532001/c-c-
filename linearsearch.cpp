#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
int linearsearchh(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
        cout<<i;
        }
        else
        {
            cout<<"not found";
        }
    }
}
int binarysearch(int arr[],int size,int element)
{
    int low,mid,high;
    low=0;
    high =size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        return mid;
        if(arr[mid]<element)
        low=mid+1;
        else
        high=mid+1;
    }
    return -1;

}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    int element;
    cin>>element;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    size=sizeof(arr)/sizeof(int);
    int searchindex=binarysearch(arr,size,element);
    cout<<binarysearch<<endl;

return 0;
}