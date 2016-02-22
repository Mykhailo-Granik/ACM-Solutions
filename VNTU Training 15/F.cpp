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

vector<string> all;
string s;

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	cin>>s;
	int p = 0;
	while (p < s.size())
	{
		int start = p;
		while ((p + 1 < s.size()) && (s[p+1] == '0'))
			p++;
		all.push_back(s.substr(start, p - start + 1));
		p++;
	}
	int res = 1;
	for (int i = (int)all.size() - 1; i >= 0; --i)
	{
		FOR(j,0,all[i].size())
			s.pop_back();
		if (s.size() > all[i].size())
		{
			res++;
			continue;
		}
		if (s.size() < all[i].size())
			break;
		if (s[0] >= all[i][0])
			res++;
		else
			break;
	}
	cout<<res<<endl;

#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

