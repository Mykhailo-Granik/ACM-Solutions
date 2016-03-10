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

vector<vector<pnt > > g;
int in[1010];
vector<pair<pnt, int> > res;

void dfs(int v, int start, int d = 1000000000)
{
	if (g[v].size() == 0)
	{
		res.push_back(mp(mp(start,v),d));
		return;
	}
	dfs(g[v][0].first, start, min(d, g[v][0].second));
}

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int n,m;
	cin>>n>>m;
	g.resize(n);
	FOR(i,0,m)
	{
		int a,b,d;
		scanf("%d%d%d",&a,&b,&d);
		a--;
		b--;
		g[a].push_back(mp(b,d));
		in[b] = 1;
	}
	FOR(i,0,n)
	{
		if ((in[i] == 0) && (g[i].size()))
		{
			dfs(i, i);
		}
	}
	printf("%d\n",res.size());
	FOR(i,0,res.size())
		printf("%d %d %d\n",res[i].first.first + 1, res[i].first.second + 1, res[i].second);

#ifdef Fcdkbear
	double end = clock();
	//fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}
