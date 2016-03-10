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
#define LL long long

int d[20010];
int p[20010];

int main() {
	
	int n,m;
	cin>>n>>m;
	FOR(i,0,20010)
		d[i] = 1000000000;
	d[n] = 0;
	p[0] = n;
	int l = 0, r = 0;
	while (l<=r)
	{
		int v = p[l];
		if (v == m)
			break;
		l++;
		if ((v > 0) && (d[v - 1] == 1000000000))
		{
			d[v - 1] = d[v] + 1;
			p[++r] = v - 1;
		}
		if ((v < m) && (d[v + v] == 1000000000)) {
			d[v + v] = d[v] + 1;
			p[++r] = v + v;
		}
	}
	cout<<d[m]<<endl;
	return 0;
}
