// 파손된 램
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[100] = {0};
	
	
	int count=0;
	for (int i = 0; i<n; i++){
		cin>> a[i];
		if ((a[i]&(a[i]-1)) != 0){
			count++;
			a[i] = 1;
		}
	}
	cout << count << endl;
	
	for (int i = 0; i<n; i++){
		if (a[i] == 1){
			cout<< i+1 << " ";
		}
	}
	
}
