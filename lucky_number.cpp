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
int lucky(int n,int &count)
{
    int next_position=n;
    if(count>n)
    return 1;
    if(n%count==0)
    return 0;
    next_position-=next_position/count;
    return lucky(next_position,count);
}


int main()
{
    int n;
    cin>>n;
    int count=2;
    if(lucky(n,count))
    cout<<1<<endl;
    else
    cout<<0<<endl;
return 0;
}