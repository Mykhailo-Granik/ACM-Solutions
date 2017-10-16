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
	vector<int> a(n, 0);
	int p;
	cin >> p;
	for (int i = 0; i < p; ++i) {
		int v;
		cin >> v;
		a[v - 1] = 1;
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int v;
		cin >> v;
		a[v - 1] = 1;
	}
	for (int i = 0; i < n; ++i) {
		if (a[i] == 0) {
			cout << "Oh, my keyboard!" << endl;
			return 0;
		}
	}
	cout << "I become the guy." << endl;
}
