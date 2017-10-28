#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	int sumL = 0, sumR = 0;
	cin >> n;
	vector<int> l(n), r(n);
	for (int i = 0; i < n; ++i) {
		scanf("%d%d",&l[i], &r[i]);
		sumL += l[i];
		sumR += r[i];
	}
	int diff = abs(sumL - sumR);
	int res = 0;
	for (int i = 0; i < n; ++i) {
		int cur_diff = abs(sumL - l[i] + r[i] - (sumR - r[i] + l[i]));
		if (cur_diff > diff) {
			res = i + 1;
			diff = cur_diff;
		}
	}
	cout << res << endl;
}
