#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int n, t;
	string s;
	cin >> n >> t >> s;
	for (int i = 0; i < t; ++i) {
		int j = 0;
		while (j + 1 < n) {
			if ((s[j] == 'B') && (s[j + 1] == 'G')) {
				swap(s[j], s[j + 1]);
				j += 2;
			} else {
				j++;
			}
		}
	}
	cout << s << endl;
}
