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
#define U unsigned

vector<vector<int> > g;

bool checkBus() {
	int cnt1 = 0;
	int start = -1;
	FOR(i,0,g.size()) {
		if (g[i].size() > 2) {
			return false;
		}
		if (g[i].size() == 1) {
			start = i;
			cnt1++;
		}
	}
	if (cnt1 != 2) {
		return false;
	}
	return true;
}

bool checkRing() {
	FOR(i,0,g.size()) {
		if (g[i].size() != 2) {
			return false;
		}
	}
	int from = -1;
	int now = 0;
	FOR(i,0,g.size()) {
		if ((i) && (now == 0)) {
			return false;
		}
		int to = -1;
		FOR(j,0,g[now].size()) {
			if (g[now][j] != from) {
				to = g[now][j];
			}
		}
		from = now;
		now = to;
	}
	return (now == 0);
}

bool checkStar() {
	int cntNot1 = 0;
	int who = -1;
	FOR(i,0,g.size()) {
		if (g[i].size() != 1) {
			who = i;
			cntNot1++;
		}
	}
	if (cntNot1 != 1) {
		return false;
	}
	return (g[who].size() == g.size() - 1);
}

int main()
{
#ifdef Fcdkbear
        freopen("in.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
        double beg = clock();
#endif

        int n,m;
        cin>>n>>m;
        g.resize(n);
        FOR(i,0,m) {
        	int v1,v2;
        	scanf("%d%d",&v1,&v2);
        	g[v1 - 1].push_back(v2 - 1);
        	g[v2 - 1].push_back(v1 - 1);
        }
        if (checkBus()) {
        	cout<<"bus topology"<<endl;
        	return 0;
        }
        if (checkRing()) {
			cout<<"ring topology"<<endl;
			return 0;
		}
        if (checkStar()) {
			cout<<"star topology"<<endl;
			return 0;
		}
        cout<<"unknown topology"<<endl;


#ifdef Fcdkbear
        double end = clock();
        fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
        return 0;
}
