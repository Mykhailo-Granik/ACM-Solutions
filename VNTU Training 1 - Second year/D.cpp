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

int n,l,r,x;
int c[20];

int rec(int pos, int sum, int min1, int max1, int cnt) {
	if (pos == n) {
		return ((sum >= l) && (sum <= r) && (cnt >= 2) && (max1 - min1 >= x));
	}
	int res = rec(pos + 1, sum, min1, max1, cnt) +
			rec(pos + 1, sum + c[pos], MIN(min1, c[pos]), MAX(max1, c[pos]), cnt + 1);
	return res;
}

int main()
{
#ifdef Fcdkbear
        freopen("in.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
        double beg = clock();
#endif

        cin>>n>>l>>r>>x;
        FOR(i,0,n)
        {
        	cin>>c[i];
        }
        cout<<rec(0, 0, 1000000000, 0, 0)<<endl;

#ifdef Fcdkbear
        double end = clock();
        fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
        return 0;
}
