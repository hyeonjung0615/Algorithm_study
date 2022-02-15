#include <iostream>
using namespace std;

int main() {
	int N, X, A;

	cin >> N >> X;


	for (int i = 1; i <= N; i++) {
		cin >> A;

		if (A < X) {
			cout << A;
			cout << " ";
		}
	}

}