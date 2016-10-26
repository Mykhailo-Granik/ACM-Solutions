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

char s[110][110];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int main()
{
#ifdef Fcdkbear
        freopen("in.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
        double beg = clock();
#endif

        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
        	scanf("%s", s[i]);
        }
        FOR(i,0,n) {
        	FOR(j,0,n) {
        		int cnt = 0;
        		FOR(k,0,4) {
        			int nx = i + dx[k];
        			int ny = j + dy[k];
        			if ((nx >= 0) && (ny >= 0) && (nx < n) && (ny < n) && (s[nx][ny] == 'o')) {
        				cnt++;
        			}
        		}
        		if (cnt&1) {
        			cout<<"NO"<<endl;
        			return 0;
        		}
        	}
        }
        cout<<"YES"<<endl;



#ifdef Fcdkbear
        double end = clock();
        fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
        return 0;
}
