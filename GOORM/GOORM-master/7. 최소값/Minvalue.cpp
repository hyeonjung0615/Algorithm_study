// 최소값
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;

	int N, n;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	cout << v[0] << endl;
	
}