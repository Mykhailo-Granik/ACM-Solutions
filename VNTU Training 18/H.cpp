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
#define MEMS(a,b) memset((a),(b),sizeof(a))
#define FI(i,n) for (int i=0; i<(n); ++i)
#define pnt pair <int, int>
#define mp make_pair
#define LL long long

using namespace std;

int h[1010];

int main() {
	// your code goes here
	int n;
	cin>>n;
	FOR(i,0,n)
		cin>>h[i];
	int res = 0;
	FOR(i,0,n)
	{
		int now = 1;
		for (int j = i - 1; j >= 0; --j)
		{
			if (h[j] > h[j + 1])
				break;
			now++;
		}
		FOR(j, i + 1, n)
		{
			if (h[j] > h[j - 1])
				break;
			now++;
		}
		res = max(res, now);
	}
	cout<<res<<endl;
	return 0;
}
