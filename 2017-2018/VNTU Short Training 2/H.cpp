#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

const int MAX_DIGITS = 60;

long long buildNumber(int digits, int zero_position) {
	long long p = 1;
	long long res = 0;
	for (int i = 0; i < digits; ++i) {
		if (i != zero_position) {
			res += p;
		}
		p += p;
	}
	return res;
}

int main()
{
	long long a,b;
	cin >> a >> b;
	int res = 0;
	for (int digits = 2; digits <= MAX_DIGITS; ++digits) {
		for (int zero_position = 0; zero_position < digits - 1; ++ zero_position) {
			long long number = buildNumber(digits, zero_position);
			if ((number >= a) && (number <= b)) {
				res++;
			}
		}
	}
	cout << res << endl;
}
