#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin >> t;

	int num[1000001];

	for (int i = 0; i < t; i++) {
		cin >> num[i];
	}

	sort(num, num + t);

	cout << num[0] << " " << num[t - 1];
}