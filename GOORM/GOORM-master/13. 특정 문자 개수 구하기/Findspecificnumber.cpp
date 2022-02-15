/*
#include <iostream>
#include <string>
using namespace std;


int main() {
	string s;

	getline(cin, s);
	
	char c;
	cin >> c;

	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c) {
			count++;
		}
		else
			continue;
	}

	cout << count << endl;


}*/


/* 삼항연산자  + 함수  풀이 */

#include <iostream>
using namespace std;


int Min(int a, int b) {
	
	return (a < b) ? a : b;
}

int main() {
	int a, b;
	cin >> a >> b;

	int result = 0;
	result = Min(a, b);
	cout << result << endl;
}

