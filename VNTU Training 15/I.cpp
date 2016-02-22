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
#define FI(i,n) for (int i=0; i<(n); ++i)
#define pnt pair <int, int>
#define mp make_pair
#define PI 3.1415926535897
#define MEMS(a,b) memset(a,b,sizeof(a))
#define LL long long
#define U unsigned

vector<string> all;
string s;

bool isGood(string s)
{
	FOR(i,0,s.size())
	{
		if ((s[i] != ' ') && (s[i] != '#'))
			return false;
		if (s[i] == '#')
			return true;
	}
	return false;
}

string removeSpaces(string s) {
	string res = "";
	FOR(i,0,s.size())
	{
		if (s[i] != ' ')
			res += s[i];
	}
	return res;
}
string old;
bool need = false;

int main()
{
#ifdef Fcdkbear
	freopen("in.txt", "r", stdin);
	double beg = clock();
	//freopen("out.txt", "w", stdout);
#endif

	old = "";
	while (getline(cin, s))
	{
		all.push_back(s);
		if (isGood(s))
		{
			if (need)
				cout<<old<<endl;
			need = false;
			old = "";
			cout<<s<<endl;
		}
		else
		{
			old += removeSpaces(s);
			need = true;
		}
	}
	if (need)
		cout<<old<<endl;

#ifdef Fcdkbear
	double end = clock();
	fprintf(stderr, "*** Total time = %.3lf ***\n", (end - beg) / CLOCKS_PER_SEC);
#endif
	return 0;
}

