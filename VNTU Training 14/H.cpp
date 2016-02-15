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

int a[500100];

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int n;
	scanf("%d",&n);
	FOR(i,0,n)
		scanf("%d",&a[i]);
	sort(a,a+n);
	int l = 1, r = n/2;
	int res = 0;
	while (l<=r)
	{
		int m = (l+r)/2;
		bool f = true;
		FOR(i,0,m)
		{
			if (a[n - m + i]/a[i] < 2)
			{
				f = false;
				break;
			}
		}
		if (f)
		{
			res = m;
			l = m + 1;
		}
		else
			r = m - 1;
	}
	cout<<n - res<<endl;


#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

