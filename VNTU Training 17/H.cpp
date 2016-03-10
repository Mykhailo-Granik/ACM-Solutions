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

int x[110];
int y[110];
int was[110];
int n;

void dfs(int v)
{
	if (was[v])
		return;
	was[v] = 1;
	FOR(i,0,n)
		if ((x[i] == x[v]) || (y[i] == y[v]))
			dfs(i);

}

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	scanf("%d",&n);
	FOR(i,0,n)
		scanf("%d%d",&x[i],&y[i]);
	int res = 0;
	FOR(i,0,n)
		if (was[i] == 0)
		{
			res++;
			dfs(i);
		}
	cout<<res-1<<endl;

#ifdef Fcdkbear
	double end = clock();
	//fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}
