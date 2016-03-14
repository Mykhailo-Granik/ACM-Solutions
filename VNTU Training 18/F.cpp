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

int a[6][6];

int main() {
	// your code goes here
	int m;
	cin>>m;
	FOR(i,0,m)
	{
		int v1,v2;
		cin>>v1>>v2;
		a[v1 - 1][v2 - 1] = a[v2 - 1][v1 - 1] = 1;
	}
	bool f = false;
	FOR(i,0,5)
		FOR(j,i+1,5)
			FOR(k,j+1,5)
				if ((a[i][j] == a[i][k]) && (a[i][j] == a[k][j]))
					f = true;
	if (f)
		cout<<"WIN"<<endl;
	else
		cout<<"FAIL"<<endl;
	return 0;
}
