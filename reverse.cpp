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
unsigned int reverse(unsigned int val)
{
 unsigned int retval = 0;

 while( val > 0)
 {
     retval  = 10*retval + val%10;
     val     /= 10;
 }
 printf("returning - %d", retval);
 return retval;
}


int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);
return 0;
}