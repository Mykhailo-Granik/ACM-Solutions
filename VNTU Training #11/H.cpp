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

int a[110][110];
int solve(int n, int m)
{
	if (n&1)
		return n;
	int mid = n / 2;
	FOR(i,0,mid)
		FOR(j,0,m)
			if (a[i][j] != a[n - i - 1][j])
				return n;
	return solve(mid, m);
}

int main() {
#ifdef Fcdkbear
    freopen("in.txt", "r", stdin);
    double beg = clock();
    //freopen("out.txt", "w", stdout);
#endif

    int n,m;
    cin>>n>>m;
    FOR(i,0,n)
    	FOR(j,0,m)
			cin>>a[i][j];
    cout<<solve(n,m)<<endl;

#ifdef Fcdkbear
    double end = clock();
    fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
    return 0;

}

