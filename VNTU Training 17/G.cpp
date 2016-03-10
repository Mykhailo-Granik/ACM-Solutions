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

char s[510][510];
int good[510][510];
int was[510][510];
int have;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int n,m;

void dfs(int x, int y)
{
	if ((x<0) || (x>=n) || (y<0) || (y>=m))
		return;
	if (was[x][y])
		return;
	if (s[x][y] != '.')
		return;
	if (have)
	{
		good[x][y] = 1;
		have--;
	}
	was[x][y] = 1;
	FOR(k,0,4)
		dfs(x+dx[k],y+dy[k]);
}

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int k;
	cin>>n>>m>>k;
	FOR(i,0,n)
		scanf("%s", s[i]);
	int cnt = 0;
	FOR(i,0,n)
	{
		FOR(j,0,m)
			cnt += (s[i][j] == '.');
	}
	have = cnt - k;
	FOR(i,0,n)
	{
		FOR(j,0,m)
			if (s[i][j] == '.')
				dfs(i,j);
	}
	FOR(i,0,n)
	{
		FOR(j,0,m)
		{
			if ((s[i][j] == '.') && (good[i][j] == 0))
				s[i][j] = 'X';
			printf("%c",s[i][j]);
		}
		printf("\n");
	}



#ifdef Fcdkbear
	double end = clock();
	//fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}
