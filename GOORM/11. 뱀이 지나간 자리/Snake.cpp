#include <iostream>
using namespace std;

int main() {
	int x, y;

	cin >> x >> y;

	int count = 0;
	for (int i = 1; i <= x; i++) {
		count++;
		if (i % 2 != 0) {  //x가 홀수
			for (int j = 1; j <= y; j++) {
				cout << "#";
			}
			cout << endl;
		}
		else { // x가 짝수
			count++;
			if (count % 2 != 0) {
				for (int j = 1; j < y; j++) {
					cout << ".";
				}
				cout << "#" << endl;
			}
			else {
				cout << "#";
				for (int j = 2; j <= y; j++) {
					cout << ".";
				}
				cout << endl;
			}
			
		}
	}
}