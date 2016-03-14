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

bool cmp(string s1, string s2)
{
	if ((s1[0] == '-') && (s2[0] != '-'))
		return true;
	if ((s1[0] != '-') && (s2[0] == '-'))
		return false;
	if (s1[0] == '-')
	{
		s1 = s1.substr(1, s1.size() - 1);
		s2 = s2.substr(1, s2.size() - 1);
		swap(s1, s2);
	}
	if (s1.size() < s2.size())
		return true;
	if (s2.size() < s1.size())
		return false;
	return (s1 < s2);
}

string s;

int main() {
	// your code goes here
	cin>>s;
	if ((cmp("-129", s)) && cmp(s, "128"))
	{
		cout<<"byte"<<endl;
		return 0;
	}
	if ((cmp("-32769", s)) && cmp(s, "32768"))
	{
		cout<<"short"<<endl;
		return 0;
	}
	if ((cmp("-2147483649", s)) && cmp(s, "2147483648"))
	{
		cout<<"int"<<endl;
		return 0;
	}
	if ((cmp("-9223372036854775809", s)) && cmp(s, "9223372036854775808"))
	{
		cout<<"long"<<endl;
		return 0;
	}
	cout<<"BigInteger"<<endl;
	return 0;
}
