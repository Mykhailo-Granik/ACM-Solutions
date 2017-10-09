#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int res = a * b * c;
	res = max(res, a + b + c);
	res = max(res, a + b * c);
	res = max(res, a * b + c);
	res = max(res, (a + b) * c);
	res = max(res, a * (b + c));
	cout << res << endl;
}
