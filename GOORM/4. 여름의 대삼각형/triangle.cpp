// 여름의 대삼각형
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	double s = 0.5 * ((x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3));
    // 삼각형 넓이
	if (s < 0) {
		s = s * -1;
	}

	double area[3];

	area[0] = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	area[1] = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	area[2] = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	int MAX;
	MAX = area[0];

	for (int i = 1; i < 3; i++) {
		if (MAX < area[i]) {
			MAX = area[i];
		}
	}

	double sum = area[0] + area[1] + area[2];

	if (MAX < sum - MAX) {
		cout << fixed;
		cout.precision(2);
		cout << s << endl;
	}
	else {
		cout << 0 << endl;
	}
}