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
int was[30010];

void dfs(int v)
{
	if (was[v])
		return;
	was[v] = 1;
	FOR(i,0,g[v].size())
		dfs(g[v][i]);
}

int main() {
	int n, t;
	cin>>n>>t;
	g.resize(n);
	t--;
	FOR(i,0,n-1)
	{
		int a;
		scanf("%d",&a);
		g[i].push_back(a+i);
	}
	dfs(0);
	if (was[t])
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
