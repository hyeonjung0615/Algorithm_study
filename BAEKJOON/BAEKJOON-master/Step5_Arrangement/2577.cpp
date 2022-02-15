/*#include <iostream>
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
}*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;
	
	int add = a * b * c;

	int count[10] = { };
	
		string s = to_string(add);
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '0') {
				count[0]++;
			}
			else if (s[j]  == '1') {
				count[1]++;
			}
			else if (s[j] == '2') {
				count[2]++;
			}
			else if (s[j] == '3') {
				count[3]++;
			}
			else if (s[j] == '4') {
				count[4]++;
			}
			else if (s[j] == '5') {
				count[5]++;
			}
			else if (s[j] == '6') {
				count[6]++;
			}
			else if (s[j] == '7') {
				count[7]++;
			}
			else if (s[j] == '8') {
				count[8]++;
			}
			else if (s[j] == '9') {
				count[9]++;
			}
		}

	for (int i = 0; i < 10; i++) {
		cout << count[i] << "\n";
	}
}