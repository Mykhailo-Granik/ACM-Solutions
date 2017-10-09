#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	string s, res;
	cin >> s;
	int i = 0;
	bool wasLetterBefore = false;
	while (i < s.size()) {
		if ((i + 2 < s.size()) && (s[i] == 'W') && (s[i + 1] == 'U') && (s[i + 2] == 'B')) {
			i += 3;
			wasLetterBefore = false;
		} else {
			if ((!wasLetterBefore) && (res.size())) {
				res += ' ';
			}
			res += s[i];
			i++;
			wasLetterBefore = true;
		}
	}
	cout << res << endl;
}
