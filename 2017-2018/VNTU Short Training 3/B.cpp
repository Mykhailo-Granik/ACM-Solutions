#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

bool isNumberLucky(int n) {
	if (n == 0) {
		return false;
	}
	while (n > 0) {
		int v = n % 10;
		if ((v != 4) && (v != 7)) {
			return false;
		}
		n /= 10;
	}
	return true;
}

int getLuckyDigitsCount(long long n) {
	int res = 0;
	while (n > 0) {
		int v = n % 10;
		if ((v == 4) || (v == 7)) {
			res++;
		}
		n /= 10;
	}
	return res;
}

int main()
{
	long long n;
	cin >> n;
	int lucky_digits_count = getLuckyDigitsCount(n);
	if (isNumberLucky(lucky_digits_count)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
