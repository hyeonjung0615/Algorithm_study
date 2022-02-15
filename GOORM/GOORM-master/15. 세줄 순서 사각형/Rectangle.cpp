#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	int r = 0;

	for (int i = 1; i < N+1; i++) {

		for (int j = 0; j < N; j++) {
			r = (j * N) + i;
			cout << r << " ";
		}
		cout << endl;
	}
}