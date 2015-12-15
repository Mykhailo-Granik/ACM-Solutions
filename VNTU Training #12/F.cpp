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

int a[100100];

int main()
{
#ifdef wRabbits
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int m;
	scanf("%d",&m);
	int q = 2000000000;
	FOR(i,0,m)
	{
		int v;
		scanf("%d",&v);
		q = min(q, v);
	}
	int n;
	scanf("%d",&n);
	FOR(i,0,n)
		scanf("%d",&a[i]);
	sort(a, a+n);
	int left = q;
	int i = n - 1;
	int res=0;
	while (i >= 0)
	{
		if (left == 0)
		{
			i-=2;
			left = q;
		}
		else
		{
			res+=a[i];
			left--;
			i--;
		}
	}
	cout<<res<<endl;

#ifdef wRabbits
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

