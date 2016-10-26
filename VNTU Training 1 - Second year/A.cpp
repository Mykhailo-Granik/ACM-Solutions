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

int main()
{
#ifdef Fcdkbear
        freopen("in.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
        double beg = clock();
#endif

        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int dx = ABS(x1 - x2);
        int dy = ABS(y1 - y2);
        if ((dx != 0) && (dy != 0) && (dx != dy)) {
        	cout<<-1<<endl;
        	return 0;
        }
        if (dx == 0) {
        	cout<<x1 + dy<<" "<<y1<<" "<<x2+dy<<" "<<y2<<endl;
        	return 0;
        }
        if (dy == 0) {
			cout<<x1<<" "<<y1 + dx<<" "<<x2<<" "<<y2 + dx<<endl;
			return 0;
		}
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;


#ifdef Fcdkbear
        double end = clock();
        fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
        return 0;
}
