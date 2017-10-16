#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int day = 1;
	while (n > 0) {
		n--;
		if (day % m == 0) {
			n++;
		}
		day++;
	}
	cout << day - 1 << endl;
}
