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

int ans[310];
int p[310];
int was[310];
char a[310][310];
int n;
vector<int> indices;
vector<int> values;

void dfs(int v)
{
	if (was[v])
		return;
	was[v] = 1;
	indices.push_back(v);
	values.push_back(p[v]);
	FOR(i,0,n)
		if (a[v][i] == '1')
			dfs(i);
}

int main() {

	cin>>n;
	FOR(i,0,n)
		cin>>p[i];
	FOR(i,0,n)
		scanf("%s", a[i]);
	FOR(i,0,n)
	{
		if (was[i] == 0)
		{
			values.clear();
			indices.clear();
			dfs(i);
			sort(values.begin(), values.end());
			sort(indices.begin(), indices.end());
			FOR(j,0,values.size())
				ans[indices[j]] = values[j];
		}
	}
	FOR(i,0,n)
	{
		if (i)
			printf(" ");
		printf("%d",ans[i]);
	}
	printf("\n");
	return 0;
}
