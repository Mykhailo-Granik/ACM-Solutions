#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <memory.h>
#include <ctime>
#include <bitset>
#include <unordered_map>

using namespace std;

#define ABS(a) ((a>0)?a:-(a))
#define MIN(a,b) ((a<b)?(a):(b))
#define MAX(a,b) ((a<b)?(b):(a))
#define FOR(i,a,n) for (int i=(a);i<(n);++i)
#define FI(i,n) for (int i=0; i<(n); ++i)
#define pnt pair <int, int>
#define mp make_pair
#define LL long long

vector<vector<int> > g;
int par[2010];

int dfs(int v)
{
	int res = 1;
	FOR(i,0,g[v].size())
		res = max(res, 1 + dfs(g[v][i]));
	return res;
}

int main() {
	int n;
	cin>>n;
	g.resize(n);
	FOR(i,0,n)
	{
		scanf("%d", &par[i]);
		if (par[i] >= 0) {
			par[i]--;
			g[par[i]].push_back(i);
		}
	}
	int res = 0;
	for (int i = 0; i < n; ++i)
		if (par[i] == -1)
			res = max(res, dfs(i));
	cout<<res<<endl;
	return 0;
}
