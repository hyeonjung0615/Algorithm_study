#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	char* arr = new char[N];
	cin >> arr;

	int sum = 0;

	for (int i = 0; i < N; i++) {
		sum += arr[i]-'0';
	}

	cout << sum;
	
}