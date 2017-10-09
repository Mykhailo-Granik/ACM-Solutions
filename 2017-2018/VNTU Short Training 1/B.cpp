#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		scanf("%d",& a[i]);
	}
	int res = 1;
	int now = 1;
	for (int i = 1; i < n; ++i) {
		if (a[i] >= a[i - 1]) {
			now++;
		} else {
			now = 1;
		}
		res = max(res, now);
	}
	cout << res << endl;
