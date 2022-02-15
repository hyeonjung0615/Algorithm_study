#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool TF = true;
int main() {
	int N;
	cin >> N;

	//char c[] = { 'b','d', 'i','l','m','n','o','p','q','s','z','u','v','w','x' };
	string s;

	for (int j = 0; j < N; j++) {
		cin >> s;

		int len = s.length();
		for (int i = 0; i < len; i++) {
			if (s[i] == 'b') {
				if (s[len - 1 - i] != 'd') {
					TF = false;
					break;
				}
			}
			else if (s[i] == 'd') {
				if (s[len - 1 - i] != 'b') {
					TF = false;
					break;
				}
			}
			else if (s[i] == 'p') {
				if (s[len - 1 - i] != 'q') {
					TF = false;
					break;
				}
			}
			else if (s[i] == 'q') {
				if (s[len - 1 - i] != 'p') {
					TF = false;
					break;
				}
			}
			else if (s[i] == 's') {
				if (s[len - 1 - i] != 'z') {
					TF = false;
					break;
				}
			}
			else if (s[i] == 'z') {
				if (s[len - 1 - i] != 's') {
					TF = false;
					break;
				}
			}
			else if (s[i] != 'b' && s[i] != 'd' && s[i] != 'i' && s[i] != 'l' \
				&& s[i] != 'm' && s[i] != 'n' && s[i] != 'o' && s[i] != 'p' \
				&& s[i] != 's' && s[i] != 'z' && s[i] != 'u' && s[i] != 'v' \
				&& s[i] != 'w' && s[i] != 'x') {
				TF = false;
				break;
			}
			else {
				TF = true;
			}
		}

		if (TF == true) {
			cout << "Mirror" << endl;
		}
		else
			cout << "Normal" << endl;

		TF = true;


	}

}