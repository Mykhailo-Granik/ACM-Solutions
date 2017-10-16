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
	if (n % 2 == 0) {
		cout << 8 << " " << n - 8 << endl;
	} else {
		cout << 9 << " " << n - 9 << endl;
	}
}
