#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	cin >> N;

	int x = 0;
	int y = 0;
	int t = 0;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> x >> y >> t;
		sum = abs(x) + abs(y);


		if ((sum % 2) == 0 && (t % 2) == 0 && (sum <= t)) {
			cout << "YES" << endl;
		}
		else if ((sum % 2) != 0 && (t % 2) != 0 && (sum <= t)) {
			cout << "YES" << endl;
		}
		
		else {
			cout << "NO" << endl;
		}
		sum = 0;
		
	}

}
