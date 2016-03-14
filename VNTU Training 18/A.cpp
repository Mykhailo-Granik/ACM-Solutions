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

string s05;

int main() {
	// your code goes here
	cin>>s;
	int period = 0;
	FOR(i,0,s.size())
		if (s[i] == '.')
			period = i;
	string s1 = s.substr(0, period);
	string s2 = s.substr(period + 1, s.size() - period - 1);
	s05 = "5";
	while (s05.size() < s2.size())
		s05 += '0';
	if (s1[s1.size() - 1] == '9') {
		cout << "GOTO Vasilisa." << endl;
	} else {
		if (s2 >= s05)
			s1[s1.size() - 1]++;
		cout<<s1<<endl;
	}
	return 0;
}
