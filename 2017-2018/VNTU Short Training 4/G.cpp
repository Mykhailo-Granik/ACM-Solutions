#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	vector<vector<int> > a(10);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		int v;
		scanf("%d", &v);
		a[v % 10].push_back(v);
	}
	for (int i = 9; i >= 0; --i) {
		for (int j = 0; j < a[i].size(); ++j) {
			int add = 10 - i;
			if (add <= k) {
				a[i][j] += add;
				k -= add;
			}
		}
	}
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < a[i].size(); ++j) {
			int add_points = min((100 - a[i][j]) / 10, k / 10);
			a[i][j] += add_points * 10;
			k -= add_points * 10;
		}
	}
	int res = 0;
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < a[i].size(); ++j) {
			res += a[i][j] / 10;
		}
	}
	cout << res << endl;
}
