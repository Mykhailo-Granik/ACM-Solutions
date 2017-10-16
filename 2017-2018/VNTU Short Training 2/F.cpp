#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int res = 1;
	if (m > 1) {
		res = m - 1;
	}
	if ((m + 1 <= n) && (n - m > m - 1)) {
		res = m + 1;
	}
	cout << res << endl;
}
