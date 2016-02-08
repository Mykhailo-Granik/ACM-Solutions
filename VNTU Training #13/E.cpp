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

int x[2010];
int y[2010];

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a%b);
}

map<pair<int, pnt>, int> mm;

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	FOR(i,0,n)
		cin>>x[i]>>y[i];
	LL res = n*(n-1);
	res *= (n-2);
	res /= 6;
	FOR(i,0,n)
	{
		mm.clear();
		FOR(j,i+1,n)
		{
			int A = y[i] - y[j];
			int B= x[j] - x[i];
			int C = -A*x[i]-B*y[i];
			int g = gcd(ABS(A),ABS(B));
			g = gcd(g, ABS(C));
			A/=g;
			B/=g;
			C/=g;
			if ((A<0) || ((A == 0) && (B<0)))
			{
				A *= -1;
				B *= -1;
				C *= -1;
			}
			mm[mp(A, mp(B,C))]++;
		}
		for (auto it:mm)
		{
			if (it.second >= 2)
			{
				LL now = it.second * (it.second - 1);
				now /= 2;
				res -= now;
			}
		}
	}


	cout<<res<<endl;

#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

