#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	int n, t, c;
	cin >> n >> t >> c;
	int cnt = 0;
	int res = 0;
	for (int i = 0; i < n; ++i) {
		int v;
		scanf("%d", &v);
		if (v <= t) {
			cnt++;
		} else {
			res += max(0, cnt - c + 1);
			cnt = 0;
		}
	}
	res += max(0, cnt - c + 1);
	cout << res << endl;
}
