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
	vector<int> res(n);
	for (int i = 0; i < n; ++i) {
		int v;
		cin >> v;
		res[v - 1] = i + 1;
	}
	for (int i = 0; i < n; ++i) {
		if (i) {
			cout << " ";
		}
		cout << res[i];
	}
	cout << endl;
}
