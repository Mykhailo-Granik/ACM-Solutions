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
	vector<int> h(n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &h[i]);
	}
	vector<int> res(n, 0);
	int max_h = h[n - 1];
	for (int i = n - 2; i >=0; --i) {
		if (h[i] <= max_h) {
			res[i] = max_h - h[i] + 1;
		} else {
			max_h = h[i];
		}
	}
	for (int i = 0; i < n; ++i) {
		if (i) {
			printf(" ");
		}
		printf("%d",res[i]);
	}
	cout << endl;
}
