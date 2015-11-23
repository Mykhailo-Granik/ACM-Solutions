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
#define FI(i,n) for (int i=0; i<(n); ++i)
#define pnt pair <int, int>
#define mp make_pair
#define PI 3.1415926535897
#define MEMS(a,b) memset(a,b,sizeof(a))
#define LL long long
#define U unsigned

string s1,s2;

int main() {
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	cin>>s1>>s2;
	if (s1.size() != s2.size()) {
		cout<<"NO"<<endl;
		return 0;
	}
	int sum1=0,sum2=0;
	FOR(i,0,s1.size())
	{
		sum1+=s1[i]-'0';
		sum2+=s2[i]-'0';
	}
	if ((sum1 == 0) && (sum2 == 0))
	{
		cout<<"YES"<<endl;
		return 0;
	}
	if ((sum1 > 0) && (sum2 > 0))
	{
		cout<<"YES"<<endl;
		return 0;
	}
	cout<<"NO"<<endl;

#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;

}

