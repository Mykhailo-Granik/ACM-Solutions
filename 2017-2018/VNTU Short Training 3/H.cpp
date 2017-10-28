#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <set>
#include <map>

using namespace std;



int main()
{
	map<string, string> change;
	set<string> seen;
	vector<string> old;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string s1, s2;
		cin >> s1 >> s2;
		change[s1] = s2;
		if (seen.find(s1) == seen.end()) {
			old.push_back(s1);
		}
		seen.insert(s1);
		seen.insert(s2);
	}
	cout << old.size() << endl;
	for (int i = 0; i < old.size(); ++i) {
		string new_handle = old[i];
		while (change.find(new_handle) != change.end()) {
			new_handle = change[new_handle];
		}
		cout << old[i] << " " << new_handle << endl;
	}
}
