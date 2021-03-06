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

string s;

int main()
{
#ifdef Fcdkbear
        freopen("in.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
        double beg = clock();
#endif

        cin >> s;
        bool capitalized = true;
        for (int i = 2; i < s.size(); ++i) {
        	if ((s[i] >= 'a') && (s[i] <= 'z')) {
        		capitalized = false;
        	}
        }
        if (capitalized) {
        	for (int i = 0; i < s.size(); ++i) {
        		if ((s[i] >= 'a') && (s[i] <= 'z')) {
        			s[i] = 'A' + (s[i] - 'a');
        		} else {
        			s[i] = 'a' + (s[i] - 'A');
        		}
        	}
        }
        cout << s << endl;

#ifdef Fcdkbear
        double end = clock();
        fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
        return 0;
}
