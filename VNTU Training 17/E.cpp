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

char s[110][110];

int main() {
	int n,m;
	cin>>n>>m;
	FOR(i,0,n)
		scanf("%s",s[i]);
	FOR(i,0,n)
	{
		FOR(j,0,m)
		{
			if (s[i][j] == '.') {
				if ((i&1) == (j&1))
					s[i][j] = 'B';
				else
					s[i][j] = 'W';
			}
		}
	}
	FOR(i,0,n)
		printf("%s\n", s[i]);
}
