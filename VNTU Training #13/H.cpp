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

set<vector<int> > s;

deque<int> a,b;

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	int k1;
	cin>>k1;
	FOR(i,0,k1)
	{
		int v;
		cin>>v;
		a.push_back(v);
	}
	int k2;
	cin>>k2;
	FOR(i,0,k2)
	{
		int v;
		cin>>v;
		b.push_back(v);
	}
	int res = 0;
	while ((a.size()) && (b.size()))
	{
		vector<int> q;
		for (auto v:a)
			q.push_back(v);
		q.push_back(n+1);
		for (auto v:b)
			q.push_back(v);
		if (s.find(q) != s.end())
		{
			cout<<-1<<endl;
			return 0;
		}
		res++;
		s.insert(q);
		int val1 = a.front();
		a.pop_front();
		int val2 = b.front();
		b.pop_front();
		if (val1>val2)
		{
			a.push_back(val2);
			a.push_back(val1);
		}
		else
		{
			b.push_back(val1);
			b.push_back(val2);
		}
	}
	cout<<res<<" ";
	if (a.size())
		cout<<1<<endl;
	else
		cout<<2<<endl;

#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

