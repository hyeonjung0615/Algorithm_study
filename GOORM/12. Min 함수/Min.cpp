#include <iostream>
using namespace std;

int Min(int a, int b) {
	if (a < b) {
		return a;
	}
	else
		return b;

}
int main() {
	int a, b;
	cin >> a >> b;

	int result = 0;
	result = Min(a, b);
	cout << result << endl;

}