#include <iostream>
#include <vector>
#include <set>
#include <string.h>
#include <algorithm>

using namespace std;

char s1[3], s2[20];
int cnt[1000010];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		scanf("%s%s",s1,s2);
		int len = strlen(s2);
		int num = 0;
		int p = 1;
		for (int j = len - 1; j >= 0; --j) {
			num += ((s2[j] - '0') % 2) * p;
			p *= 2;
		}
		if (s1[0] == '+') {
			cnt[num]++;
		} else if (s1[0] == '-') {
			cnt[num]--;
		} else {
			printf("%d\n", cnt[num]);
		}
	}
}
