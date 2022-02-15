#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int N;
	cin >> N;
	cin.ignore(1);

	string s;
	int count = 0;
	for (int i = 1; i < N+1; i++) {
		getline(cin, s);
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'
				|| s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U') {
				cout << s[j];
				count++;
			}
		}
		if (count == 0) {
			cout << "???";
		}
		cout << endl;
		count = 0;
		
	}

}