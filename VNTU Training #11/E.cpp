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

int c[3010];

int main() {
#ifdef Fcdkbear
    freopen("in.txt", "r", stdin);
    double beg = clock();
    //freopen("out.txt", "w", stdout);
#endif

    int n,v;
    scanf("%d%d",&n,&v);
    FOR(i,0,n)
    {
    	int a,b;
    	scanf("%d%d",&a,&b);
    	c[a]+=b;
    }
    int left = 0;
    int res=0;
    FOR(i,0,3010)
    {
    	int now = v;
    	int have = min(left, now);
    	res+=have;
    	now-=have;
    	have=min(now,c[i]);
    	res+=have;
    	left=c[i]-have;
    }
    cout<<res<<endl;

#ifdef Fcdkbear
    double end = clock();
    fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
    return 0;

}

