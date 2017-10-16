#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	int n;
	cin >> n;
	n--;
	int now = 5;
	while (n >= now) {
		n -= now;
		now *= 2;
	}
	cout << names[n / (now / 5)] << endl;
}
