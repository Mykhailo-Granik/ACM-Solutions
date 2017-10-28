#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

char s[200100];
const int LETTERS = 26;

int main()
{
	int n,m;
	cin >> n >> m;
	scanf("%s", s);
	vector<int> a(LETTERS);
	for (int i = 0; i < LETTERS; ++i) {
		a[i] = i;
	}
	for (int i = 0; i < m; ++i) {
		char c1, c2;
		scanf("\n%c %c",&c1,&c2);
		swap(a[c1 - 'a'], a[c2 - 'a']);
	}
	vector<int> b(LETTERS);
	for (int i = 0; i < LETTERS; ++i) {
		b[a[i]] = i;
	}
	for (int i = 0; i < n; ++i) {
		printf("%c", 'a' + b[s[i] - 'a']);
	}
	cout << endl;
}
