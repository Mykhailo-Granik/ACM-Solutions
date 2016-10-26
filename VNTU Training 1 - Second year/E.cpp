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

vector<vector<int>> g;
vector<int> res[2];
int was[200100];
bool ok;

void dfs(int v, int part) {
	if (was[v] != -1) {
		if (was[v] != part) {
			ok = false;
		}
		return;
	}
	was[v] = part;
	res[part].push_back(v);
	FOR(i,0,g[v].size()) {
		dfs(g[v][i], part ^ 1);
	}
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
        	cin>>v1>>v2;
        	v1--;
        	v2--;
        	g[v1].push_back(v2);
        	g[v2].push_back(v1);
        }
        MEMS(was, -1);
        ok = true;
        FOR(i,0,n) {
        	if (was[i] == -1) {
        		dfs(i,0);
        	}
        }
        if (!ok) {
        	cout<<-1<<endl;
        } else {
        	cout<<res[0].size()<<endl;
        	FOR(i,0,res[0].size()) {
        		if (i) {
        			printf(" ");
        		}
        		printf("%d",res[0][i] + 1);
        	}
        	cout<<endl;
        	cout<<res[1].size()<<endl;
			FOR(i,0,res[1].size()) {
				if (i) {
					printf(" ");
				}
				printf("%d",res[1][i] + 1);
			}
			cout<<endl;
        }


#ifdef Fcdkbear
        double end = clock();
        fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
        return 0;
}
