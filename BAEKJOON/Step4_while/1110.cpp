#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int newnum = 0;
	int tmp = 0;
	int n = 0;
	n = N;
	int count = 0;

	if (N == 0) {
		count++;
	}

	while (N != newnum) {

		tmp = (n / 10) + (n % 10);
		newnum = (n % 10) * 10 + (tmp % 10);
		n = newnum;
		count++;
	}
	cout << count++;
}