#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool hasDifferentDigits(int n) {
	set<int> s;
	int cnt = 0;
	while (n) {
		s.insert(n % 10);
		n /= 10;
		cnt++;
	}
	return (cnt == s.size());
}

int main() {
	int n;
	cin >> n;
	while (1) {
		n++;
		if (hasDifferentDigits(n)) {
			cout << n << endl;
			break;
		}
	}
}
