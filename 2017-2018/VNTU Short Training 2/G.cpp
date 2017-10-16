#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

bool checkAutomaton(string s, string t) {
	int p = 0;
	for (int i = 0; i < t.size(); ++i) {
		while ((p < s.size()) && (s[p] != t[i])) {
			p++;
		}
		if (p == s.size()) {
			return false;
		}
		p++;
	}
	return true;
}

vector<int> getCharCount(string s) {
	vector<int> a(26, 0);
	for (int i = 0; i < s.size(); ++i) {
		a[s[i] - 'a']++;
	}
	return a;
}

bool checkArray(string s, string t) {
	vector<int> a = getCharCount(s);
	vector<int> b = getCharCount(t);
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] != b[i]) {
			return false;
		}
	}
	return true;
}

bool checkBoth(string s, string t) {
	vector<int> a = getCharCount(s);
	vector<int> b = getCharCount(t);
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] < b[i]) {
			return false;
		}
	}
	return true;
}

int main()
{
	string s,t;
	cin >> s >> t;
	if (checkAutomaton(s, t)) {
		cout << "automaton" << endl;
	} else if (checkArray(s, t)) {
		cout << "array" << endl;
	} else if (checkBoth(s, t)) {
		cout << "both" << endl;
	} else {
		cout << "need tree" << endl;
	}
}
