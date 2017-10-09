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

string s1,s2;

int main()
{
#ifdef Fcdkbear
        freopen("in.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
        double beg = clock();
#endif

        cin>>s1>>s2;
        for (int i = 0; i < s1.size(); ++i) {
        	if ((s1[i] >= 'A') && (s1[i] <= 'Z')) {
        		s1[i] = 'a' + (s1[i] - 'A');
        	}
        	if ((s2[i] >= 'A') && (s2[i] <= 'Z')) {
				s2[i] = 'a' + (s2[i] - 'A');
			}
        }
        if (s1 < s2) {
        	cout << -1 << endl;
        } else if (s1 == s2) {
        	cout << 0 << endl;
        } else {
        	cout << 1 << endl;
        }

#ifdef Fcdkbear
        double end = clock();
        fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
        return 0;
}
