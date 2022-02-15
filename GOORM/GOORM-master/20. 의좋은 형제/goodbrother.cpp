#include <iostream>
using namespace std;

int main() {
	int a, b;
	int d;
	int count = 0;
	cin >> a >> b;
	cin >> d;

	for (int i = 0; i < d; i++) {
		if (count % 2 == 0) {
			if (a == 1) {
				b = a + b;
				a = 0;
			}
			
			if (a % 2 == 0) {
				a = a / 2;
				b = b + a;
			}
			else {
				a = (a / 2);
				b = b + (a+1);
			}
		}
		else {
			if (b == 1) {
				a = b + a;
				b = 0;
			}
			if (b % 2 == 0) {
				b = b / 2;
				a = a + b;
			}
			else {
				b = (b / 2);
				a = a + (b+1);
			}
		}
		count++;
	}

	cout << a << " " << b << '\n';

}