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
	int res = 0;
	for (int i = 0; i < n; ++i) {
		int p, q;
		cin >> p >> q;
		if (q - p >= 2) {
			res++;
		}
	}
	cout << res << endl;
}
