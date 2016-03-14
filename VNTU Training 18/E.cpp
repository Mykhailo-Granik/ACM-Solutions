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

string s;
string digs[15];

int main() {
	// your code goes here
	cin>>s;
	FOR(i,0,10)
		cin>>digs[i];
	FOR(i,0,8)
	{
		string s1 = s.substr(i*10, 10);
		FOR(j,0,10)
			if (s1 == digs[j])
				cout<<j;
	}
	cout<<endl;
	return 0;
}
