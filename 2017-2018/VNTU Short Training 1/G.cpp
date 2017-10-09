#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

char s[100100];

int main()
{
	scanf("%s", s);
	string t = (string)s;
	vector<int> sum(t.size());
	for (int i = 1; i < t.size(); ++i) {
		sum[i] = sum[i - 1];
		if (t[i] == t[i - 1]) {
			sum[i]++;
		}
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int l, r;
		scanf("%d%d",&l,&r);
		l--;
		r--;
		printf("%d\n", sum[r] - sum[l]);
	}
}
