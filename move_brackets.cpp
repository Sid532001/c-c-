#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#define endl '\n'
#define null NULL
#define ll long long
#define int long long
#define pii pair<int, int>
#define lowbit(x) (x &(-x))
#define ls(x) x<<1
#define rs(x) (x<<1+1)
#define me(ar) memset(ar, 0, sizeof ar)
#define mem(ar,num) memset(ar, num, sizeof ar)
#define rp(i, n) for(int i = 0, i < n; i ++)
#define rep(i, a, n) for(int i = a; i <= n; i ++)
#define pre(i, n, a) for(int i = n; i >= a; i --)
#define IOS ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
const int way[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
using namespace std;
const int  inf = 0x7fffffff;
const double PI = acos(-1.0);
const double eps = 1e-6;
const ll   mod = 1e9 + 7;
const int  N = 2e5 + 5;

int t, n;
char s[N];

signed main()
{
    IOS;

    cin >> t;
    while(t --){
        cin >> n >> s;
        stack<char> st;
        for(int i = 0; i < n; i ++){
            if(st.empty() || s[i] == '(') st.push(s[i]);
            else if(s[i] == ')'){
                if(st.size() && st.top() == '(') st.pop();
                else st.push(s[i]);
            }
        }
        cout << st.size() / 2 << endl;
    }

    return 0;
}

