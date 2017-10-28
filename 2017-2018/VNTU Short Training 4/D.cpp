#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int max_index = 0;
	for (int i = 1; i < n; ++i) {
		if (a[i] > a[max_index]) {
			max_index = i;
		}
	}
	int min_index = n - 1;
	for (int i = n - 2; i >= 0; --i) {
		if (a[i] < a[min_index]) {
			min_index = i;
		}
	}
	int res = max_index + (n - 1 - min_index);
	if (max_index > min_index) {
		res--;
	}
	cout << res << endl;
}
