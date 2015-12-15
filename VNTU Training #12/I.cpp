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

double a[100100];

int main()
{
#ifdef wRabbits
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	FOR(i,0,n)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		a[i]=atan2((double)y,(double)x);
	}
	sort(a, a + n);
	double res=a[n-1]-a[0];
	FOR(i,1,n)
		res=min(2*PI+a[i-1]-a[i], res);
	res = (res / PI) * 180;
	printf("%.15lf\n",res);

#ifdef wRabbits
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}
