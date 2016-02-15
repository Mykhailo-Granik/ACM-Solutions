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

int getNumberOfDigits(LL num)
{
	int res = 0;
	while (num)
	{
		res++;
		num/=10;
	}
	return res;
}

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	LL w,m,k;
	cin>>w>>m>>k;
	LL p = 1;
	int digs = getNumberOfDigits(m);
	FOR(i,0,digs)
		p*=10;
	LL res = 0;
	while (1)
	{
		LL cnt = w / (k*digs);
		if (cnt >= p - m)
		{
			w -= (p - m)*k*digs;
			res += p - m;
			m = p;
			p *= 10;
			digs++;
		}
		else
		{
			res += cnt;
			break;
		}
	}
	cout<<res<<endl;


#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

