#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long ans = (n + 1) / 2;
	if (n % 2) {
		ans *= -1;
	}
	cout << ans << endl;
}
