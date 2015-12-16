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
#define PI 3.14159265358979
#define MEMS(a,b) memset(a,b,sizeof(a))
#define LL long long
#define U unsigned
vector<vector<pnt > > res;
vector<int> s;

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	double beg = clock();
#endif

	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	FOR(i, 0, k - 1)
		s.push_back(2);
	s.push_back(n*m - (k - 1) * 2);
	int x = 0, y = 0;
	int dy = 1;
	int p = 0;
	int cnt = 0;
	res.resize(k);
	while (p < s.size())
	{
		cnt++;
		res[p].push_back(mp(x + 1, y + 1));
		if (cnt == s[p])
		{
			p++;
			cnt = 0;
		}
		y += dy;
		if (y >= m)
		{
			x++;
			y = m - 1;
			dy = -1;
		}
		else
		if (y < 0)
		{
			y = 0;
			x++;
			dy = 1;
		}
	}
	FOR(i, 0, k)
	{
		printf("%d", res[i].size());
		FOR(j, 0, res[i].size())
		{
			printf(" %d %d", res[i][j].first, res[i][j].second);
		}
		printf("\n");
	}

#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}
