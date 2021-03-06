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
#define PI 3.1415926535897
#define MEMS(a,b) memset(a,b,sizeof(a))
#define LL long long
#define U unsigned

int isLockedCell[110];
int isLockedCore[110];
int now[110];
int res[110];
int a[110][110];

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int n,m,k;
	cin>>n>>m>>k;
	FOR(i,0,n)
	{
		FOR(j,0,m)
		{
			scanf("%d",&a[i][j]);
			a[i][j]--;
		}
	}
	FOR(i,0,m)
	{
		MEMS(now, 0);
		FOR(j,0,n)
		{
			if ((a[j][i] == -1) || (isLockedCore[j]))
				continue;
			if (isLockedCell[a[j][i]])
			{
				isLockedCore[j] = 1;
				res[j] = i + 1;
				continue;
			}
			now[a[j][i]]++;
		}
		FOR(j,0,n)
		{
			if ((isLockedCore[j]) || (a[j][i] == -1))
				continue;
			if (now[a[j][i]] > 1)
			{
				isLockedCore[j] = 1;
				res[j] = i + 1;
				isLockedCell[a[j][i]] = 1;
			}
		}
	}
	FOR(i,0,n)
		cout<<res[i]<<endl;

#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

