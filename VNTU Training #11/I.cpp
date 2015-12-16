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

int a[210];
vector<int> b,c;
int n,k;

int solve(int l, int r)
{
	int len1 = r - l + 1;
	int len2 = n - len1;
	b.clear();
	c.clear();
	int sum=0;
	FOR(i,0,n)
	{
		if ((i>=l) && (i<=r))
		{
			b.push_back(a[i]);
			sum+=a[i];
		}
		else
		{
			c.push_back(a[i]);
		}
	}
	sort(b.begin(), b.end());
	sort(c.rbegin(), c.rend());
	int v=min(len1, min(len2, k));
	FOR(i,0,v)
	{
		if (c[i]>b[i])
			sum+=(c[i]-b[i]);
		else
			break;
	}
	return sum;
}

int main() {
#ifdef Fcdkbear
    freopen("in.txt", "r", stdin);
    double beg = clock();
    //freopen("out.txt", "w", stdout);
#endif

    cin>>n>>k;
    FOR(i,0,n)
    	cin>>a[i];
    int res = -2000000000;
    FOR(l,0,n)
    	FOR(r,l,n)
			res=max(res,solve(l,r));
    cout<<res<<endl;

#ifdef Fcdkbear
    double end = clock();
    fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
    return 0;

}
