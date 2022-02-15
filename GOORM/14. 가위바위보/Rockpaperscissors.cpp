#include  <iostream>
using namespace std;

int main() {
	
	char c[5] = { 0 };

	int count1 = 0;
	int count2 = 0;
	int count3 = 0;

	for (int i = 0; i < 5; i++) {
		cin >> c[i];

		if (c[i] == '1') {
			count1++;
		}
		else if (c[i] == '2') {
			count2++;
		}
		else if (c[i] == '3') {
			count3++;
		}
		
		

	}

	if (count1 != 0 && count2 != 0 && count3 != 0) {
		cout << '0' << endl;
	}
	else if (count1 == 0 && count2 == 0 && count3 == 0){
		cout << '0' << endl;
	}
	else if (count1 == 5){
		cout << '0' << endl;
	}
	else if (count2 == 5){
		cout << '0' << endl;
	}
	else if (count3 == 5){
		cout << '0' << endl;
	}
	else if (count1 == 0) {
		cout << count3 << endl;
	}
	else if (count2 == 0) {
		cout << count1 << endl;
	}
	else if (count3 == 0) {
		cout << count2 << endl;
	}


}