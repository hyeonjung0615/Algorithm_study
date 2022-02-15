#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int a;
	string s;

	

	for (int i = 0; i < N; i++) {
		cin >> a >> s;

		
		for (int j = 0; j < s.length(); j++) {
			for (int z = 0; z < a; z++) {
				cout << s[j];
			}
		}
		cout << endl;
	}
}