#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n[9];
	
	for (int i = 0; i < 9; i++) {
		cin >> n[i];
	}
	
	int MAX = n[0];
	int index = 0;

	for (int j = 0; j < 9; j++) {
		if (MAX <= n[j]) {
			MAX = n[j];
			index = j + 1;
		}
	}

	cout << MAX << '\n' << index;
	return 0;
}