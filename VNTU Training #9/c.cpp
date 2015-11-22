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

set<int> s;
int ans[300100];

int main() {
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int n,m;
	scanf("%d%d",&n,&m);
	FOR(i,1,n+1)
		s.insert(i);
	FOR(i,0,m)
	{
		int l,r,x;
		scanf("%d%d%d",&l,&r,&x);
		s.erase(x);
		while (1)
		{
			set<int>::iterator it = s.lower_bound(l);
			if (it == s.end())
				break;
			int who = *it;
			if (who > r)
				break;
			s.erase(who);
			ans[who - 1] = x;
		}
		s.insert(x);
	}
	FOR(i,0,n)
	{
		if (i)
			printf(" ");
		printf("%d",ans[i]);
	}
	printf("\n");
#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;

}

