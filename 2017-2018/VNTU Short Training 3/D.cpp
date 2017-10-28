#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int m, n;
	cin >> n >> m;
	vector<int> a(m);
	for (int i = 0; i < m; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int res = a[n - 1] - a[0];
	for (int i = 0; i + n <= m; ++i) {
		res = min(res, a[n + i - 1] - a[i]);
	}
	cout << res << endl;
}
