#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

char s[100100];

long long getNumberOfConnections(int n) {
	return (n * 1ll * (n - 1)) / 2;
}

int main()
{
	int n, m;
	cin >> n >> m;
	int large_groups = n % m;
	int small_groups = m - large_groups;
	long long res1 = small_groups * getNumberOfConnections(n / m) + large_groups * getNumberOfConnections(n / m + 1);
	long long res2 = getNumberOfConnections(n - m + 1);
	cout << res1 << " " << res2 << endl;
}
