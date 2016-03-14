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

int a[1010];

int main() {
	// your code goes here
	int n;
	cin>>n;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	if (sum%n != 0) {
		cout<<"Unrecoverable configuration."<<endl;
		return 0;
	}
	int need = sum / n;
	int res1 = 0, res2 = 0, cnt = 0;
	FOR(i,0,n) {
		if (a[i] < need)
		{
			res1 = i + 1;
			cnt++;
		}
		if (a[i] > need)
		{
			res2 = i + 1;
			cnt++;
		}
	}
	if (cnt == 0) {
		cout<<"Exemplary pages."<<endl;
		return 0;
	}
	if (cnt > 2) {
		cout<<"Unrecoverable configuration."<<endl;
		return 0;
	}
	printf("%d ml. from cup #%d to cup #%d.\n", need - a[res1 - 1], res1, res2);
	return 0;
}
