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

int solve(int n, int m)
{
	int cnt = n + m - 1;
	n--;
	int last = 0;
	int res = 0;
	FOR(i,0,cnt)
	{
		if (i&1)
		{
			if ((last == 0) && (n > 0))
			{
				n--;
				res++;
				continue;
			}
			if ((last == 1) && (m > 0))
			{
				m--;
				res++;
				continue;
			}
			if (n > 0)
			{
				n--;
				last = 0;
				continue;
			}
			if (m > 0)
			{
				m--;
				last = 1;
			}
		}
		else
		{
			if ((last == 0) && (m > 0))
			{
				m--;
				last = 1;
				continue;
			}
			if ((last == 1) && (n > 0))
			{
				n--;
				last = 0;
				continue;
			}
			if (n > 0)
			{
				n--;
				res++;
				continue;
			}
			if (m > 0)
			{
				m--;
				res++;
			}
		}
	}
	return res;
}

int main()
{
#ifdef wRabbits
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int n,m;
	cin>>n>>m;
	int res=max(solve(n,m),solve(m,n));
	cout<<res<<" "<<n+m-1-res<<endl;

#ifdef wRabbits
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

