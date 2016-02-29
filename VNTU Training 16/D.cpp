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

string op;
string ans;

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int l = -2000000000;
	int r = 2000000000;
	int n;
	scanf("%d",&n);
	FOR(i,0,n)
	{
		int num;
		cin>>op>>num>>ans;
		if (op == ">=")
		{
			if (ans[0] == 'Y')
				l = max(l, num);
			else
				r = min(r, num - 1);
		}
		if (op == "<")
		{
			if (ans[0] == 'Y')
				r = min(r, num - 1);
			else
				l = max(l, num);
		}
		if (op == "<=")
		{
			if (ans[0] == 'Y')
				r = min(r, num);
			else
				l = max(l, num + 1);
		}
		if (op == ">")
		{
			if (ans[0] == 'Y')
				l = max(l, num + 1);
			else
				r = min(r, num);
		}
	}
	if (l <= r)
		cout<<l<<endl;
	else
		cout<<"Impossible"<<endl;

#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

