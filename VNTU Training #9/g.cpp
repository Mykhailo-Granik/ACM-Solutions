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

char a[60][60];

int canGoLeftOrRight(int x, int y1, int y2)
{
	if (y1>y2)
		return canGoLeftOrRight(x, y2, y1);
	for (int i = y1; i <= y2; ++i)
	{
		if (a[x][i] == 'W')
			return false;
	}
	return true;
}

int canGoDown(int y, int x1, int x2)
{
	for (int i = x1; i <= x2; ++i)
	{
		if (a[i][y] == 'W')
			return false;
	}
	return true;
}

int main() {
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int n,m;
	scanf("%d%d",&n,&m);
	FOR(i,0,n)
	{
		scanf("%s",&a[i]);
	}
	FOR(i1,0,n)
	{
		FOR(j1,0,m)
		{
			FOR(i2,i1,n)
			{
				int start = 0;
				if (i2 == i1)
					start = j1;
				FOR(j2,start,m)
				{
					if ((a[i1][j1] == 'W') || (a[i2][j2] == 'W')) {
						continue;
					}
					bool f=false;
					if ((canGoLeftOrRight(i1,j1,j2)) && (canGoDown(j2,i1,i2)))
						f=true;
					if ((canGoLeftOrRight(i2,j1,j2)) && (canGoDown(j1,i1,i2)))
						f=true;
					if (!f)
					{
						cout<<"NO"<<endl;
						return 0;
					}
				}
			}
		}
	}
	cout<<"YES"<<endl;

#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;

}

