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

int a[5];
int b[5];

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	FOR(i,0,4)
	{
		cin>>a[i]>>b[i];
	}
	if ((a[0]>b[2]) && (b[1]>a[3]) && (a[0]>b[3]) && (b[1]>a[2]))
	{
		cout<<"Team 1"<<endl;
		return 0;
	}
	if ((a[1]>b[2]) && (b[0]>a[3]) && (a[1]>b[3]) && (b[0]>a[2]))
	{
		cout<<"Team 1"<<endl;
		return 0;
	}
	if (((a[0]<b[2]) && (b[1]<a[3])) || ((a[0]<b[3]) && (b[1]<a[2])))
	{
		if (((a[1]<b[2]) && (b[0]<a[3])) || ((a[1]<b[3]) && (b[0]<a[2]))) {
			cout<<"Team 2"<<endl;
			return 0;
		}
	}
	cout<<"Draw"<<endl;

#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

