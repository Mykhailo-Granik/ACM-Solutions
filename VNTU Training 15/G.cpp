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


int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int x,y,n;
	cin>>x>>y>>n;
	LL res1 = 0;
	LL res2 = 1;
	FOR(b,1,n+1)
	{
		int v = (x*1ll*b)/y;
		FOR(a,v,v+2)
		{
			LL v1 = ABS(x*1ll*b-a*1ll*y);
			LL v2 = y*1ll*b;
			LL v3 = ABS(x*1ll*res2-res1*1ll*y);
			LL v4 = res2*1ll*y;
			if (v1*v4-v2*v3<0)
			{
				res1 = a;
				res2 = b;
			}
		}
	}
	cout<<res1<<"/"<<res2<<endl;

#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

