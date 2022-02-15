// 고장난 컴퓨터
#include <iostream>
using namespace std;

int main() {
	int H, C;
	cin>> H >> C;
	int *time = new int[H];
	
	for (int i=0; i<H; i++){
		cin>>time[i];
	}
	
	int count =1;
	
	for (int i=0; i< H-1; i++){
		if (C+1>(time[i+1]-time[i])){
			count++;
		}
		else {
			count = 1;
			continue;
		}
	}
	cout << count << endl;
	
	delete [] time;

}