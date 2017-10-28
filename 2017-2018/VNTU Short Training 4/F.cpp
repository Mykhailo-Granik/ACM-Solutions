#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i <= n / 1234567; ++i) {
		int left = n - i * 1234567;
		for (int j = 0; j <= left / 123456; ++j) {
			if ((left - j * 123456) % 1234 == 0) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
}
