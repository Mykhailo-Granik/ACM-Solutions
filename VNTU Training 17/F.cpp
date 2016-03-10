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

int a[110][110];
int n,m;
int was[110];

void dfs(int v)
{
	if (was[v])
		return;
	was[v] = 1;
	FOR(i,0,n)
	{
		FOR(j,0,m)
			if ((a[i][j]) && (a[v][j]))
				dfs(i);
	}
}

int main() {
	cin>>n>>m;
	int sum = 0;
	FOR(i,0,n)
	{
		int k;
		scanf("%d",&k);
		FOR(j,0,k)
		{
			int v;
			scanf("%d",&v);
			a[i][v - 1] = 1;
		}
		sum += k;
	}
	if (sum == 0)
	{
		cout<<n<<endl;
		return 0;
	}
	int res = 0;
	FOR(i,0,n)
	{
		if (was[i] == 0) {
			dfs(i);
			res++;
		}
	}
	cout<<res-1<<endl;
	
}
