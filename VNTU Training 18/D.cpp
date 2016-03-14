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

int getNumberOfDigits(int n)
{
	int res = 0;
	while (n)
	{
		res++;
		n /= 10;
	}
	return res;
}

vector<LL> all;

void gen(int digs, int fours, int sevens, LL num) {
	if (digs == 0) {
		all.push_back(num);
		return;
	}
	if (fours > 0) {
		gen(digs - 1, fours - 1, sevens, num * 10 + 4);
	}
	if (sevens > 0) {
		gen(digs - 1, fours, sevens - 1, num * 10 + 7);
	}
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int v = getNumberOfDigits(n);
	if (v&1) {
		gen(v + 1, (v+1)/2, (v+1)/2, 0);
	} else {
		gen(v, v/2, v/2, 0);
		gen(v+2, v/2+1, v/2+1,0);
	}
	LL ans = 1000000000000000000ll;
	FOR(i,0,all.size())
	{
		if ((all[i] >= n) && (all[i] < ans))
			ans = all[i];
	}
	cout<<ans<<endl;
	return 0;
}
