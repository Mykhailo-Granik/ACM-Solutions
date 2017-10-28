#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int v = min(n, m);
	if (v % 2) {
		cout << "Akshat" << endl;
	} else {
		cout << "Malvika" << endl;
	}
}
