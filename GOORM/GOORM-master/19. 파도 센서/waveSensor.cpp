#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int X1 = 0, Y1 = 0, R = 0;
	int  X2 = 0, Y2 = 0;

	int index = 0;
	cin >> X1 >> Y1 >> R;

	int r[5] = { 0 };
	int count = 0;
	int  n[5] = { 0};

	for (int i = 0; i < 5; i++) {
		cin >> X2 >> Y2;

		r[i] = sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2, 2));
		n[i] = r[i];

	}

	sort(r, r + 5);



	for (int j = 0; j < 5; j++) {
		if (n[j] > R) {
			count++;
			if (count == 5) {
				cout << -1 << '\n';
				return 0;
			}
		}
		else {
			if (n[j] == r[0]) {
				index = j+1;
				break;
			}
			else {
				continue;
			}
			
		}
	}
	cout << index << endl;

}
