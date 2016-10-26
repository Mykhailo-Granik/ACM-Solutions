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

int t[100100];
int l[100100];
int r[100100];

inline bool inside(int x, int l, int r) {
	return ((x >= l) && (x <= r));
}

int main()
{
#ifdef Fcdkbear
        freopen("in.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
        double beg = clock();
#endif

       int n,m,s,f;
       cin>>n>>m>>s>>f;
       FOR(i,0,m) {
    	   scanf("%d%d%d",&t[i],&l[i],&r[i]);
       }
       int index = 0;
       int curT = 1;
       while (s != f) {
    	   if (s < f) {
    		   if ((index == m) || (curT != t[index]) || (!inside(s,l[index],r[index]) && (!inside(s + 1, l[index], r[index])))) {
    			   s++;
    			   printf("R");
    		   } else {
    			   printf("X");
    		   }
    	   } else {
    		   if ((index == m) || (curT != t[index]) || (!inside(s,l[index],r[index]) && (!inside(s - 1, l[index], r[index])))) {
				   s--;
				   printf("L");
			   } else {
				   printf("X");
			   }
    	   }
    	   if ((index < m) && (t[index] == curT)) {
    		   index++;
    	   }
    	   curT++;
       }
       printf("\n");


#ifdef Fcdkbear
        double end = clock();
        fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
        return 0;
}
