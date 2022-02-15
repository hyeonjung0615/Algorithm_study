#include <iostream>
using namespace std;

int main() {
	int C;
	cin >> C;

	for (int i = 0; i < C; i++) {
		int n;
		cin >> n;
		int* score = new int[n];
		int sum = 0;
		int arg = 0;
		int count = 0;
		for (int j = 0; j < n; j++) {
			cin >> score[j];
			sum += score[j];
		}

		arg = sum / n;

		for (int j = 0; j < n; j++) {
			if (arg < score[j]) {
				count++;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << (float)count / n * 100 << "%" << '\n';
	}

}