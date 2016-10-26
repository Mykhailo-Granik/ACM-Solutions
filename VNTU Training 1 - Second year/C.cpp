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
#define MEMS(a,b) memset((a),(b),sizeof(a))
#define FI(i,n) for (int i=0; i<(n); ++i)
#define pnt pair <int, int>
#define mp make_pair
#define LL long long
#define U unsigned

int dp[110][2];
int mod = 1000000007;
int k,d;

int r(int n, int f) {
	if (n < 0) {
		return 0;
	}
	if (n == 0) {
		return f;
	}
	if (dp[n][f] != -1) {
		return dp[n][f];
	}
	int res = 0;
	FOR(v,1,k+1) {
		int nf = f;
		if (v >= d) {
			nf = 1;
		}
		res += r(n - v, nf);
		if (res >= mod) {
			res -= mod;
		}
	}
	return dp[n][f] = res;
}

int main()
{
#ifdef Fcdkbear
        freopen("in.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
        double beg = clock();
#endif

        int n;
        cin>>n>>k>>d;
        MEMS(dp, -1);
        cout<<r(n, 0)<<endl;


#ifdef Fcdkbear
        double end = clock();
        fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
        return 0;
}
