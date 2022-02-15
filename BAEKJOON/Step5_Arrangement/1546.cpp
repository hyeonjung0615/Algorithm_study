#include <iostream>
using namespace std;

int main() {
   int N;
   double arr[1000] = { 0 };

   cin >> N;
   int MAX = 0;
   for (int i = 0; i < N; i ++) {
      cin >> arr[i];
      if (MAX < arr[i]) {
         MAX = arr[i];
      }
   }
   double avg = 0;
   for (int i = 0; i < N; i++) {
      arr[i] = arr[i] / MAX * 100;
      avg += arr[i];
   }

   cout << avg / N << endl;
}